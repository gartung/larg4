set(CMAKE_CXX_FLAGS "${Geant4_CXX_FLAGS} -Wno-shadow -Wno-unused-parameter")
simple_plugin(
  MCTruthEventAction service
NOP
  art_Framework_Principal
  art_Framework_Services_Registry
  artg4tk_actionBase
  artg4tk_services_ActionHolder_service
  art_Persistency_Provenance
  ${Boost_FILESYSTEM_LIBRARY}
  ${Boost_SYSTEM_LIBRARY}
  canvas
  cetlib_except
  clhep
  fhiclcpp
  ${Geant4_LIBRARIES}
  MF_MessageLogger
  nusimdata_SimulationBase
  nug4_G4Base
  ${ROOT_Core_LIBRARY}
  ${ROOT_Physics_LIBRARY}
SOURCE
  MCTruthEventAction_service.cc
)

simple_plugin(
  ParticleListAction service
NOP
  art_Framework_Services_Registry
  canvas
  fhiclcpp
  cetlib_except
  ${Boost_FILESYSTEM_LIBRARY}
  ${Boost_SYSTEM_LIBRARY}
  art_Framework_Core
  art_Framework_Principal
  artg4tk_actionBase
  artg4tk_services_ActionHolder_service
  art_Persistency_Provenance
  clhep
  ${Geant4_LIBRARIES}
  MF_MessageLogger
  nusimdata_SimulationBase
  nug4_G4Base
  nug4_ParticleNavigation
  ${ROOT_Core_LIBRARY}
  ${ROOT_Physics_LIBRARY}
SOURCE
  ParticleListAction_service.cxx
)

install_headers()
