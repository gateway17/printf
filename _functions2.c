#include "holberton.h"

/**
 *
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

int function_Switch(char ch, va_list lista)
{
	int count = 0;

	count = _switch(ch, lista);
	return (count);
}

int pass_trough(va_list lista, const char *format)
{
	int i = 0;
	int count = 0;
	int tag = 0;
	int count_f = 0;
	int _check_p = 0;

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
			{
				tag++;

			}
			else
			{
				/* function for switch */
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
				{
					count += _putchar('%');
				}

			}
		}
		/*function to check percent */
		_check_p = _percent(&tag, idx);
		count += _check_p;
		if (_check_p == 0 && idx != '\0' && idx != '%')
			count += _putchar(idx);
			i++;
		_check_p = 0;


	}
	return (count);
}

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


