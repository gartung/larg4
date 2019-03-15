set_source_files_properties(LArG4Detector_service.cc PROPERTIES COMPILE_FLAGS -I$ENV{G4INCLUDE}/Geant4 )

simple_plugin(
  LArG4Detector service
  SOURCE
    LArG4Detector_service.cc
    SimEnergyDepositSD.cc
    AuxDetSD.cc	
  NOP
    ${ART_FRAMEWORK_CORE}
    ${ART_FRAMEWORK_PRINCIPAL}
    ${ART_PERSISTENCY_PROVENANCE}
    #${ARTG4TK_PLUGINDETECTORS_GDML}
    #${ARTG4TK_SERVICES_DETECTORHOLDER_SERVICE}
    artg4tk_pluginDetectors_gdml
    artg4tk_services_DetectorHolder_service
    ${CLHEP}
    ${G4_LIB_LIST}
    ${MF_MESSAGELOGGER}
    ${ROOT_BASIC_LIB_LIST}
    ${XERCESCLIB}
)

install_headers() 
