#include "holberton.h"

/**
 *_integer - Print integer.
 *@integer: Number to print.
 *Return: Mount of characters that has the number.
 */
int _integer(int integer)
{
	char array_itoa[10];

	_itoa(integer, array_itoa);
	write(1, array_itoa, _strl(array_itoa));
	return (_strl(array_itoa));
}

/**
 *_pchar - Print character.
 *@lista: Character to print.
 *Return: Amount of characters
 */
int _pchar(va_list lista)
{
	int i;

	i = va_arg(lista, int);
	_putchar(i);
	return (1);
}

/**
 * _string - Print string given.
 *@lista: Number to print.
 *Return: Amount of characters that has the string.
 */
int _string(va_list lista)
{
	char *_string2;
	int count = 0;

	_string2 = va_arg(lista, char *);
	if (!_string2)
	{
		_string2 = "(Null)";
		_puts(_string2);
		return (_strl(_string2));
	}
	_puts(_string2);
	count = _strl(_string2);
	return (count);
}
