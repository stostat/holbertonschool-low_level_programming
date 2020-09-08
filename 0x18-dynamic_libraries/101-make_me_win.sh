
#!/bin/bash
wget -P "https://github.com/stostat/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/bingo.so"
export LD_PRELOAD=/tmp/bingo.so
