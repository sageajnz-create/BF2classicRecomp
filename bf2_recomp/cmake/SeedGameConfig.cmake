if(NOT EXISTS "${GAME_DIR}/bf2_recomp.ini")
    configure_file("${DEFAULT_INI}" "${GAME_DIR}/bf2_recomp.ini" COPYONLY)
endif()
