#include "holberton.h"

/**
int _printf(const char *format, ...)
{
int i = 0;

/*va_start*/
/**
va_start(lista, format);
if ( condicionales, tenía ejemplos, pero acá van?)
/**
return (-1);
*/

void _reverse(char s[]);

int _strl(char *str);

void _itoa(int n, char s[]);

int _printf(const char *format, ...);

int main (void)
{

	_printf("Hello my name is %c\n and i am %d years old\n", 'a', 30);
	return(0);
}

int _printf(const char *format, ...)
{
int i = 0;
char string;
int count = 0;
char array_itoa[10];
int integer;


va_list lista;

va_start(lista, format);

for (;format[i] != '\0';i++)
{
	if (format[i] == '%')
	{
		i++;
		switch (format[i])
		{
			
			case 'c':
				string = (char)va_arg(lista, int);
				write(1, &string,1);
				count++;
				break;
			/**
			case 'c':
			va_arg(lista, int);
			break;
			*/
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
