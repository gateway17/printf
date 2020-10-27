#ifndef __HOLBERTON_H__
#define __HOLBERTON_H__
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
void _reverse(char s[]);
int _strl(char *str);
void _itoa(int n, char s[]);
int _putchar(char c);
int _integer(int integer);
int _pchar(char a);
int _string(char *_string);

#endif