#!/bin/bash
curl  https://raw.githubusercontent.com/monoprosito/holbertonschool-low_level_programming/master/0x18-dynamic_libraries/libgiga.so --output ../libgiga.so
export LD_PRELOAD="$PWD/../libgiga.so"
