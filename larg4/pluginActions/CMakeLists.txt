simple_plugin(
  MCTruthEventAction service
NOP
  art_Persistency_Provenance
  CLHEP
  MF_MessageLogger
SOURCE
  MCTruthEventAction_service.cc
)

simple_plugin(
  ParticleListAction service
NOP
  art_Persistency_Provenance
  CLHEP
  MF_MessageLogger
SOURCE
  ParticleListAction_service.cxx
)

install_headers()
