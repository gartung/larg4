//=============================================================================
// AuxDetSD.cc: Class representing a sensitive aux detector
// Author: Hans Wenzel (Fermilab)
//=============================================================================

#include "larg4/Services/AuxDetSD.h"
#include "Geant4/G4Step.hh"
#include "Geant4/G4ThreeVector.hh"
#include "Geant4/G4SystemOfUnits.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
namespace larg4 {

  AuxDetSD::AuxDetSD(G4String name)
  : G4VSensitiveDetector(name)
  {
    hitCollection.clear();
  }

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

AuxDetSD::~AuxDetSD() {

}
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
void  AuxDetSD::Initialize(G4HCofThisEvent* ) {
   hitCollection.clear();
}
  //....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
  G4bool  AuxDetSD::ProcessHits(G4Step* step, G4TouchableHistory*) {
  G4double edep = step->GetTotalEnergyDeposit() / CLHEP::MeV;
  if (edep == 0.) return false;
  //art::ServiceHandle<ParticleListActionService const> pla;
  //const unsigned int trackID = pla->GetCurrentTrackID();
  const unsigned int trackID = step->GetTrack()->GetTrackID();
  unsigned int ID = step->GetPreStepPoint()->GetPhysicalVolume()->GetCopyNo();
  sim::AuxDetHit newHit = sim::AuxDetHit(ID,
				    trackID,
				    edep,
				    step->GetPreStepPoint()->GetPosition().getX()/CLHEP::cm,
				    step->GetPreStepPoint()->GetPosition().getY()/CLHEP::cm,
				    step->GetPreStepPoint()->GetPosition().getZ()/CLHEP::cm,
				    step->GetPreStepPoint()->GetGlobalTime()/CLHEP::ns,
				    step->GetPostStepPoint()->GetMomentum().getX()/CLHEP::cm,
				    step->GetPostStepPoint()->GetMomentum().getY()/CLHEP::cm,
				    step->GetPostStepPoint()->GetMomentum().getZ()/CLHEP::cm,
				    step->GetPostStepPoint()->GetGlobalTime()/CLHEP::ns,
				    step->GetPostStepPoint()->GetMomentum().getX()/CLHEP::GeV,
				    step->GetPostStepPoint()->GetMomentum().getY()/CLHEP::GeV,
				    step->GetPostStepPoint()->GetMomentum().getZ()/CLHEP::GeV
				    );
  hitCollection.push_back(newHit);
  return true;
}
} // namespace sim
