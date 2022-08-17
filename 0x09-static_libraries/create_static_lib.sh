#!/bin/bash
gcc -c *.c -fpic
ar -cvr libmy.a *.o
