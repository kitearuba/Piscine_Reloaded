#!/bin/bash

if [ $# -eq 0 ]; then
    echo "No hay argumentos?"
else
    while [ $# -gt 0 ]; do
        mkdir "ex$1"
        shift
    done
fi