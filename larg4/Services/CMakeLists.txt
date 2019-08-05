simple_plugin(
  LArG4Detector "service"
  SOURCE
    LArG4Detector_service.cc
    SimEnergyDepositSD.cc
    AuxDetSD.cc
  NOP
    ${ART_FRAMEWORK_CORE}
    ${ART_FRAMEWORK_PRINCIPAL}
    artg4tk_DataProducts_G4DetectorHits
    artg4tk_pluginDetectors_gdml
    artg4tk_services_DetectorHolder_service
    ${ART_PERSISTENCY_PROVENANCE}
    ${CLHEP}
    ${G4DIGITS_HITS}
    ${G4EVENT}
    ${G4GEOMETRY}
    ${G4GLOBAL}
    ${G4MATERIALS}
    ${G4PERSISTENCY}
    ${MF_MESSAGELOGGER}
)

install_headers()
