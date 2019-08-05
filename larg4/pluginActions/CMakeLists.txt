simple_plugin(MCTruthEventAction "service"
              ${ART_FRAMEWORK_PRINCIPAL}
              ${ART_PERSISTENCY_PROVENANCE}
              artg4tk_actionBase
              artg4tk_services_ActionHolder_service
              ${CLHEP}
              ${G4GLOBAL}
              ${G4PARTICLES}
              ${MF_MESSAGELOGGER}
              nusimdata_SimulationBase
              nug4_G4Base
              ${ROOT_CORE}
              ${ROOT_PHYSICS})

simple_plugin(ParticleListAction "service"
              ${ART_FRAMEWORK_PRINCIPAL}
              ${ART_PERSISTENCY_PROVENANCE}
              artg4tk_actionBase
              artg4tk_services_ActionHolder_service
              ${CLHEP}
              ${G4PARTICLES}
              ${MF_MESSAGELOGGER}
              nusimdata_SimulationBase
              nug4_G4Base
              nug4_ParticleNavigation
              ${ROOT_CORE}
              ${ROOT_PHYSICS})

install_headers()
