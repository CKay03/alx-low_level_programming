#!/bin/bash
echo -e '#include <stdio.h>\nint main(void)\n{\n\tputs("Programming is like building a multilingual puzzle");\n\treturn (0);\n}' > puzzle.c && gcc -o puzzle puzzle.c && ./puzzle
