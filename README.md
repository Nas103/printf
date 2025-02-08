printf Project

Overview

This is a custom implementation of the printf function in C. The project replicates the functionality of the standard printf function from the C standard library (stdio.h), handling various format specifiers, flags, width, precision, and size modifiers.

Features

✅ Supports format specifiers: %c, %s, %d, %i, %u, %o, %x, %X, %p
✅ Handles flag characters (+,  , #, -, 0)
✅ Supports width, precision, and size modifiers
✅ Implements a modular approach for extendability

Files Description

Usage

To use _printf, include printf.h in your C program and call _printf() as you would with the standard printf().

#include "printf.h"

int main(void)
{
    _printf("Hello, %s! Your score is %d.\n", "Rhulani", 100);
    return (0);
}

Compilation

Compile the source files using GCC:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o printf

Authors

👤 Rhulani Mashala – GitHub
