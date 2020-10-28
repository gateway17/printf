#include "holberton.h"

/**
 * _printf -
 * Return:
 */
int _printf(const char *format, ...)
{
	int count = 0;
	const char *new_format;
	va_list lista;

	if (!format)
		return (-1);

	va_start(lista, format);
	new_format = format;

	count = pass_trough(lista, new_format);

	va_end(lista);
	return (count);
}
