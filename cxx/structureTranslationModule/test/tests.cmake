set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${SC_BIN_PATH}/ostis-ps-tests)

make_tests_from_folder(${CMAKE_CURRENT_LIST_DIR}/units
        NAME structure_translation_test_starter
        DEPENDS structureTranslationModule sc-builder-lib sc-core
        INCLUDES ${SC_MEMORY_SRC}/tests/sc-memory/_test ${CMAKE_CURRENT_LIST_DIR}/.. ${SC_MACHINE_PATH}/sc-tools/sc-builder/src)

add_definitions(-DSTRUCTURE_TRANSLATION_MODULE_TEST_SRC_PATH="${CMAKE_CURRENT_LIST_DIR}")
