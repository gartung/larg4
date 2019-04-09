set(CMAKE_CXX_FLAGS "${Geant4_CXX_FLAGS} -Wno-shadow -Wno-unused-parameter")
simple_plugin(
  LArG4Detector service
  SOURCE
    LArG4Detector_service.cc
    SimEnergyDepositSD.cc
    AuxDetSD.cc
  NOP
    art_Framework_Core
    art_Framework_Principal
    art_Framework_Services_Registry
    artg4tk_DataProducts_G4DetectorHits
    artg4tk_pluginDetectors_gdml
    artg4tk_services_DetectorHolder_service
    art_Persistency_Provenance
    ${Boost_FILESYSTEM_LIBRARY}
    ${Boost_SYSTEM_LIBRARY}
    canvas
    cetlib
    cetlib_except
    clhep
    fhiclcpp
    ${Geant4_LIBRARIES}
    larcorealg_Geometry
    MF_MessageLogger
    ${ROOT_Core_LIBRARY}
    ${XERCESC}
)

install_headers()
