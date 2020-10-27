# C – printf

This repository contain the files that makes our own printf function. 
printf() has one string argument (str) and rest are variable arguments. Variable arguments are managed by macros like va_start, va_arg and va_end from the stdarg.h library.

We iterate character by character in a for loop and copy each character to output string. Same time we check for "%". "%" is not copied to output string. Once we found it, we check the next character: the formatting character. 

This project is an application of the C programming knowledge that Holberton School cohort 13 students have learned since starting the program on september of 2020.

### Function Prototype: 
int _printf(const char *, ...);

### Format specifiers
Formatting character says how to format the argument to visible output string. Printf supports varieties of formatting. 
%c print a single character
%d print a decimal (base 10) number
%i print an integer in base 10
%s print a string of characters

We match the formatting and pick the argument variable using va_arg(). Argument variable is then converted to string format and appends to the output string. Character can be copied as it is and Itoa function is used for integer to string conversion. 

### File descriptions

printf.c: - contains the function printf, which uses the prototype int _printf(const char *format, ...);. The format string is composed of zero or more directives. See man 3 printf for more detail. _printf will return the number of characters printed (excluding the null byte used to end output to strings) and will write output to stdout, the standard output stream.
_putchar.c: - contains the function _putchar, which writes a character to stdout.
holberton.h: - contains all function prototypes used for printf.

////* Pendiente*/////
    man_3_printf: - manual page for the custom _printf function. 

### We compiled trought:
gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c

### Authors

Andrés Sepúlveda | @andress14023892

Helena Cortés | @helectron




