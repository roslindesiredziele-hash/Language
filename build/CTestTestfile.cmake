# CMake generated Testfile for 
# Source directory: C:/MyPROJECTS/Language-Evolution-Simulator
# Build directory: C:/MyPROJECTS/Language-Evolution-Simulator/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(LanguageTests "C:/MyPROJECTS/Language-Evolution-Simulator/build/Debug/test_language.exe")
  set_tests_properties(LanguageTests PROPERTIES  _CMAKE_TEST_BUILD_DEPENDS "C:/MyPROJECTS/Language-Evolution-Simulator/build/Debug/test_language.exe" _BACKTRACE_TRIPLES "C:/MyPROJECTS/Language-Evolution-Simulator/CMakeLists.txt;19;add_test;C:/MyPROJECTS/Language-Evolution-Simulator/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(LanguageTests "C:/MyPROJECTS/Language-Evolution-Simulator/build/Release/test_language.exe")
  set_tests_properties(LanguageTests PROPERTIES  _CMAKE_TEST_BUILD_DEPENDS "C:/MyPROJECTS/Language-Evolution-Simulator/build/Release/test_language.exe" _BACKTRACE_TRIPLES "C:/MyPROJECTS/Language-Evolution-Simulator/CMakeLists.txt;19;add_test;C:/MyPROJECTS/Language-Evolution-Simulator/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(LanguageTests "C:/MyPROJECTS/Language-Evolution-Simulator/build/MinSizeRel/test_language.exe")
  set_tests_properties(LanguageTests PROPERTIES  _CMAKE_TEST_BUILD_DEPENDS "C:/MyPROJECTS/Language-Evolution-Simulator/build/MinSizeRel/test_language.exe" _BACKTRACE_TRIPLES "C:/MyPROJECTS/Language-Evolution-Simulator/CMakeLists.txt;19;add_test;C:/MyPROJECTS/Language-Evolution-Simulator/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(LanguageTests "C:/MyPROJECTS/Language-Evolution-Simulator/build/RelWithDebInfo/test_language.exe")
  set_tests_properties(LanguageTests PROPERTIES  _CMAKE_TEST_BUILD_DEPENDS "C:/MyPROJECTS/Language-Evolution-Simulator/build/RelWithDebInfo/test_language.exe" _BACKTRACE_TRIPLES "C:/MyPROJECTS/Language-Evolution-Simulator/CMakeLists.txt;19;add_test;C:/MyPROJECTS/Language-Evolution-Simulator/CMakeLists.txt;0;")
else()
  add_test(LanguageTests NOT_AVAILABLE)
endif()
