#!/bin/bash

gcc -Wall -Werror -pedantic -Wextra -std=gnu89 -c *.c && ar -rc liball.a *.o && ar -t liball.a
