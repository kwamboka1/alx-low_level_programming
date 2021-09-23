#!/bin/bash
gcc -c -Wall -pendatic -Werror -Wextra *.c
ar rc liball.a *.o
ranlib liball.a
