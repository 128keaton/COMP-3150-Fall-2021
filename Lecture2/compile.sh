#!/bin/bash

COMPILE_FILE="input"

gcc $(echo $COMPILE_FILE).c -o runme && ./runme && rm -rf runme
