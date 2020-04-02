# use cmake 3.12 or later
cmake_minimum_required (VERSION 3.12)

project(larg4 VERSION 08.12.01 LANGUAGES CXX)

find_package( cetmodules )
set(fcl_dir job)
set(gdml_dir gdml)
include(CetCMakeEnv)
cet_cmake_env()

cet_set_compiler_flags(DIAGS CAUTIOUS WERROR NO_UNDEFINED EXTRA_FLAGS -pedantic)

#if (NOT ${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
#set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -Wl,--no-undefined,--no-allow-shlib-undefined,--as-needed")
#set(CMAKE_MODULE_LINKER_FLAGS "${CMAKE_MODULELINKER_FLAGS} -Wl,--no-undefined,--no-allow-shlib-undefined,--as-needed")
#set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,--no-undefined,--no-allow-shlib-undefined,--as-needed")
#endif()

cet_report_compiler_flags()

find_package(nug4 REQUIRED)
find_package(artg4tk REQUIRED)
find_package(larevt REQUIRED)
find_package(Geant4 REQUIRED)
find_package(ROOT REQUIRED)
include(${Geant4_USE_FILE})
# macros for dictionary and simple_plugin
include(ArtDictionary)
include(ArtMake)
include(BuildPlugins)

# artgktk
cet_find_library( ARTG4TK_ACTIONBASE NAMES artg4tk_actionBase )
cet_find_library( ARTG4TK_GEANTINIT NAMES artg4tk_geantInit )
cet_find_library( ARTG4TK_PLUGINDETECTORS_GDML NAMES artg4tk_pluginDetectors_gdml )
cet_find_library(ARTG4TK_DATAPRODUCTS_G4DETECTORHITS NAMES artg4tk_DataProducts_G4DetectorHits )
cet_find_library(ARTG4TK_SERVICES_ACTIONHOLDER_SERVICE NAMES artg4tk_services_ActionHolder_service )
cet_find_library(ARTG4TK_SERVICES_PHYSICSLISTHOLDER_SERVICE NAMES artg4tk_services_PhysicsListHolder_service )
cet_find_library(ARTG4TK_SERVICES_DETECTORHOLDER_SERVICE NAMES artg4tk_services_DetectorHolder_service )

add_subdirectory(fcl)
add_subdirectory(gdml)
add_subdirectory(larg4)
#add_subdirectory(ups)
add_subdirectory(cmakeConfig)
# packaging utility
#include(UseCPack)
