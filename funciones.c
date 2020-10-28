#include "holberton.h"

/**
 * _reverse - reverse string
 * @s: array
 * Return: none
 */
void _reverse(char s[])
{
	int i, j;
	char c;

	for (i = 0, j = _strl(s) - 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

/**
 * _itoa - convert int to char
 * @s: become to char
 * @n: integer to be converted
 * Return: none
 */
void _itoa(int n, char s[])
{
	int i;
	int sign = n;

	if (sign < 0)  /* record sign */
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

/**
 * _putchar - print char to char
 * @c: char
 * Return: none
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * 
 */ 
void _puts(char *str) {
	int i;

	for (i = 0; i< _strl(str); i++)
	{
		_putchar(str[i]);
	}
}

/**
 * _strl - string length
 * @str: pointer to a string
 * Return: string
 */
int _strl(char *str)
{
	int i = 0;

	while (*str++)
		i++;
	return (i);
}
