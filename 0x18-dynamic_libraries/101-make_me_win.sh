#!/bin/bash
wget -q --output-document=$HOME/libgm.so https://github.com/cyrusDev1/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libgm.so
export LD_PRELOAD=$HOME/libgm.so
