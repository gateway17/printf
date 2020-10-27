#include <holberton.h>

int _integer(int integer)
{
	char integer[10];
	__itoa(integer, array_itoa);
	write(1, array_itoa, _strl(array_itoa));
	return (_strl(integer));
}

int _char(char)
{
	write(1, &_char, 1);
	return (1);
}

int _string(char *_string)
{
	write(1, _string,_strl(printchar));
	return(_strl(printchar));
}