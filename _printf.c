#include "holberton.h"

/**
 * main - Entry point
 *
 */
int _printf(const char *format, ...)
{
int i = 0;
char _char;
int count = 0;
char array_itoa[10];
int integer;
char *_string;

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
				_char ((char)va_arg(lista, int));
				break;

			case 's':
				count += _string(va_arg(lista, char*);
				break;
				/** _string = va_arg(lista, char*);
				write(1, _string,_strl(printchar));
				count++;
				break;
				*/
				int _string(char *_string)
				{
				write(1, _string,_strl(printchar));
				return(_strl(printchar));
				}	

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
