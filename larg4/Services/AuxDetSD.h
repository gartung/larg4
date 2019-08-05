//=============================================================================
// AuxDetSD.h: Class representing a sensitive tracking detector
// Author: Hans Wenzel (Fermilab)
//=============================================================================
#ifndef AuxDetSD_h
#define AuxDetSD_h

#include "lardataobj/Simulation/AuxDetHit.h"
#include "Geant4/G4VSensitiveDetector.hh"

class G4Step;
class G4HCofThisEvent;

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
namespace larg4 {

    class AuxDetSD : public G4VSensitiveDetector {
    public:
      AuxDetSD(G4String name );
      virtual ~AuxDetSD();
      void Initialize(G4HCofThisEvent*);
      G4bool ProcessHits(G4Step*, G4TouchableHistory*);
      const sim::AuxDetHitCollection& GetHits() const { return hitCollection; }

    private:
      sim::AuxDetHitCollection hitCollection;
    };
}   // namespace larg4

#endif
