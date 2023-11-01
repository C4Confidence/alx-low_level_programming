#!/bin/bash
gcc -Wall -pedantic -Werro -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
