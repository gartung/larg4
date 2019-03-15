simple_plugin(
  MCTruthEventAction service
NOP
  art_Framework_Principal
  art_Persistency_Provenance
  artg4tk_actionBase
  CLHEP
  G4_LIB_LIST
  MF_MessageLogger
  nutools_G4Base
  nusimdata_SimulationBase
  ROOT_BASIC_LIB_LIST
SOURCE
  MCTruthEventAction_service.cc
)

simple_plugin(
  ParticleListAction service
NOP
  art_Framework_Core
  art_Framework_Principal
  art_Persistency_Provenance
  artg4tk_actionBase
  CLHEP
  G4_LIB_LIST
  MF_MessageLogger
  nusimdata_SimulationBase
  nutools_G4Base
  nutools_ParticleNavigation
  ROOT_BASIC_LIB_LIST
SOURCE
  ParticleListAction_service.cxx
)

install_headers()
