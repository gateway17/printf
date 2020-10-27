#include <stdio.h>

/**
int _printf(const char *format, ...)
{
int i = 0;

/*va_start*/
/**
va_start(arg, format);
if ( condicionales, tenía ejemplos, pero acá van?)
/**
return (-1);
*/
int _printf(const char *format, ...);

int main (void)
{
	char *p = "Hello my name is %c";

	_printf(p);
	return(0);
}

int _printf(const char *format, ...)
{
int i = 0;
for (;format[i] != '\0';i++)
{
	if (format[i] == '%')
	{
		i++;
		switch (format[i])
		{
			case 'c':
				printf("Andres, Si funciona caracter.");
				break;
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
}



