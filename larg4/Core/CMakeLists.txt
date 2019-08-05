art_make(
  MODULE_LIBRARIES
    artg4tk_geantInit
    artg4tk_services_ActionHolder_service
    artg4tk_services_DetectorHolder_service
    artg4tk_services_PhysicsListHolder_service
    ${G4EVENT}
    ${G4INTERCOMS}
    ${G4INTERFACES}
    ${G4RUN}
    ${G4TRACKING}
    larg4_pluginActions_ParticleListAction_service
    ${ROOT_CORE}
    ${ROOT_PHYSICS}
)

install_headers()
