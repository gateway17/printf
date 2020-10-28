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
int _pchar(va_list lista);
int _string(va_list lista);
int pass_trough(va_list lista, const char *format);
int function_Switch(char ch, va_list lista);
int _percent(int *tag, char idx);
int _switch(char ch, va_list lista);
void _puts(char *str);

#endif