#!/bin/bash
gcc -Wall -o size_types -xc - << EOF && ./size_types && rm size_types
