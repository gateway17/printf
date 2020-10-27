#include "holberton.h"

/**
* _printf - print string with different formats
 * @format: string printed with args
 * Return: intr (number of chars
*/


int main (void)
{

	_printf("Hello my name is %c, i am %d years old.\n Also i am in the 30% of my life\n", 'a', 1050);
	return(0);
}

int _printf(const char *format, ...)
{
int i = 0;
char letter;
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
				letter = (char)va_arg(lista, int);
				write(1, &letter,1);
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

			case '%':
				_putchar('%');
				count++;
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

/* string length*/
int _strl(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return(i);
}

void _itoa(int n, char s[])
 {
     int i, sign;
 
     if ((sign = n) < 0)  /* record sign */
         n = -n;          /* make n positive */
     i = 0;
     do {       /* generate digits in reverse order */
         s[i++] = n % 10 + '0';   /* get next digit */
     } while ((n /= 10) > 0);     /* delete it */
     if (sign < 0)
         s[i++] = '-';
     s[i] = '\0';
     _reverse(s);
 }

int _putchar(char c)
{
	return (write(1, &c, 1));
} 

void _reverse(char s[])
 {
     int i, j;
     char c;
 
     for (i = 0, j = _strl(s)-1; i<j; i++, j--) {
         c = s[i];
         s[i] = s[j];
         s[j] = c;
     }
 }
