#!/bin/bash
gc  -Wall -pedantic -Werror -Wextra -c *.c
ar rc liball.a *.o
