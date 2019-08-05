#ifndef GDMLDETECTOR_SERVICE_HH
#define GDMLDETECTOR_SERVICE_HH

// Framework includes
#include "art/Framework/Services/Registry/ServiceMacros.h"
#include "fhiclcpp/fwd.h"
#include "messagefacility/MessageLogger/MessageLogger.h"
namespace art { class EDProducer; }

// Get the base class
#include "artg4tk/Core/DetectorBase.hh"

// G4 dependencies
class G4HCofThisEvent;
class G4LogicalVolume;
class G4VPhysicalVolume;

// C++ STL
#include <vector>
#include <string>

namespace larg4 {

    class LArG4DetectorService : public artg4tk::DetectorBase {
    private:
      std::string gdmlFileName_;  // name of the gdml file
      bool checkoverlaps_;        // enable/disable check of overlaps
      bool dumpMP_;               // enable/disable dump of material properties
      // A message logger for this action
      mf::LogInfo logInfo_;
      std::vector<std::pair<std::string,std::string> > DetectorList;
    public:
        LArG4DetectorService(fhicl::ParameterSet const&);
        ~LArG4DetectorService();

    private:

        // Private overriden methods
        virtual std::vector<G4LogicalVolume*> doBuildLVs() override;
        virtual std::vector<G4VPhysicalVolume*> doPlaceToPVs(std::vector<G4LogicalVolume*>) override;
        // We need to add something to the art event, so we need these two methods:

        // Tell Art what we'll produce
        virtual void doCallArtProduces(art::EDProducer * producer) override;

        // Actually produce
        virtual void doFillEventWithArtHits(G4HCofThisEvent * hc) override;
    };
}
using larg4::LArG4DetectorService;
DECLARE_ART_SERVICE(LArG4DetectorService,LEGACY)
#endif
