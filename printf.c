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
int _printf(const char *format, ...);

int main (void)
{

	_printf("Hello my name is %c\n", 'a');
	return(0);
}

int _printf(const char *format, ...)
{
int i = 0;
char string;
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
				printf("Si funciona numero entero");
				break;
		}

	}
	else
	{

	write(1,&format[i],1);

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


