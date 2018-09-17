#!/bin/bash
gcc -g -fPIC -Wall -Werror -Wextra -pedantic -lc -Wl,-soname,liball.so *.c -shared -o liball.so
