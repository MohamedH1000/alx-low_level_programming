#!/bin/bash
wget -P /tmp https://github.com/MohamedH1000/alx-low_level_programming/tree/main/0x18-dynamic_libraries/-the_win.so
export LD_PRELOAD=/tmp/-the_win.so
