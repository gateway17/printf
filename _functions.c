#include "holberton.h"

int _integer(int integer)
{
	char array_itoa[10];

	_itoa(integer, array_itoa);
	write(1, array_itoa, _strl(array_itoa));
	return (_strl(array_itoa));
}

int _pchar(char a)
{
	write(1, &a, 1);
	return (1);
}

int _string(char *_string)
{
	write(1, _string, _strl(_string));
	return (_strl(_string));
}
