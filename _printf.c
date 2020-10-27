#include "holberton.h"

/**
 * main - Entry point
 *
 *
 */
int _printf(const char *format, ...)
{
int i = 0;
char string;
int count = 0;
char array_itoa[10];
int integer;
char *printchar;

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
				string = (char)va_arg(lista, int);
				write(1, &string,1);
				count++;
				break;
			
			case 's':
				printchar = va_arg(lista, char*);
				write(1, printchar,_strl(printchar));
				count++;
				break;

			case 'd':
				integer = va_arg(lista, int);
				_itoa(integer, array_itoa);
				count = count + _strl(array_itoa);
				write(1, array_itoa, _strl(array_itoa));
				break;
		}
	}
	else
	{
		write(1,&format[i],1);
		count++;
	}
}
	va_end(lista);
}
