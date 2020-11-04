#include "holberton.h"

/**
 * _percent - verification of the special char % as %%
 * @tag_idx: auxiliar variable to hold the %
 * @tag: new variable that holds a dereference
 * @idx: 
 * Return - total count of the chars recived
 */
int _percent(int *tag, char idx)
{
	int tag_idx;
	int count = 0;

	tag_idx = *tag;
	if (tag_idx == 2 && idx == '%')
	{
		_putchar('%');
		tag_idx = 0;
		count = 1;
	}
	return (count);
}
/*
*function_Switch -
*@count: number of chars */
int function_Switch(char ch, va_list lista)
{
	int count = 0;

	count = _switch(ch, lista);
	return (count);
}

/*
*pass_trough - To check line to line before get into the switch function
*@i: increment from position 0 of the char array for validations
*@idx: intern incremental for the format to print
*/
int pass_trough(va_list lista, const char *format)
{
	int i = 0, count = 0, tag = 0, count_f = 0, _check_p = 0;

	while (i < _strl((char *)format) && *format != '\0')
	{
		char idx = format[i];

		if (idx == '%')
		{
			i++;
			tag++;
			idx = format[i];
			if (idx == '\0')
				return (count);
			if (idx == '%')
				tag++;
			else
			{
				count_f = function_Switch(idx, lista);
				if (count_f >= 0 && count_f != -1)
				{
					i++;
					idx = format[i];
					if (idx == '%')
						tag--;
					count = count + count_f;
				}
				else if (count_f == -1 && idx != '\n')
					count += _putchar('%');
			}
		}
		_check_p = _percent(&tag, idx);
		count += _check_p;
		if (_check_p == 0 && idx != '\0' && idx != '%')
			count += _putchar(idx);
			i++;
		_check_p = 0;
	}
	return (count);
}

/*
*_switch - To check line to line before get into the switch function
*@i: increment from position 0 of the char array for validations
*@idx: intern incremental for the format to print
*/
int _switch(char ch, va_list lista)
{
	int count = 0;

	switch (ch)
	{
		case 'c':
			count += _pchar(lista);
			break;
		case 's':
			count += _string(lista);
			break;
		case 'd':
		case 'i':
			count += _integer(va_arg(lista, int));
			break;
		case '%':
			count += _putchar('%');
			break;
	}
	return (count);
}
