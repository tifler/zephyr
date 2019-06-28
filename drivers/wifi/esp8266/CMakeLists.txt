if(CONFIG_WIFI_ESP8266)
    zephyr_include_directories(./)
    
    zephyr_sources(
        esp8266.c
    )
endif()
