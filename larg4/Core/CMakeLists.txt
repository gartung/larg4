set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${Geant4_CXX_FLAGS} -Wno-shadow -Wno-unused-parameter")
art_make(
  MODULE_LIBRARIES
    art_Framework_Core
    art_Framework_Principal
    art_Framework_Services_Registry
    artg4tk_geantInit
    artg4tk_services_ActionHolder_service
    artg4tk_services_DetectorHolder_service
    artg4tk_services_PhysicsListHolder_service
    art_Persistency_Provenance
    art_Utilities
    Boost::filesystem
    Boost::system
    canvas
    cetlib
    cetlib_except
    ${CLHEP_LIBRARIES}
    ${Geant4_LIBRARIES}
    fhiclcpp
    larg4_pluginActions_ParticleListAction_service
    MF_MessageLogger
    ROOT::Core
    ROOT::Physics
)

install_headers()
