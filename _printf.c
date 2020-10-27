#include "holberton.h"

/**
 * main - Entry point
 *
 */
int _printf(const char *format, ...)
{
int i = 0;
int count = 0;

va_list lista;

va_start(lista, format);

for (;format[i] != '\0';i++)
{
	if (format[i] == '%')
	{
		i++;
		switch (format[i])
		{
			/**
			case char
			*/
			case 'c':
				count += _pchar((char)va_arg(lista, int));
				break;

			case 's':
				count += _string(va_arg(lista, char*));
				break;

			case 'i':
				count += _integer (va_arg(lista, int));
				break;

			case '%':
				count += _putchar('%');
				break;
		}
	}
	else
	{
		write(1, &format[i], 1);
		count++;
	}
}
	va_end(lista);

	return(count);
}
