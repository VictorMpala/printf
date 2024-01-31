#include "main.h"

/**
 * _printf - produces an output according to a format
 * @format: character string
 * Return: the number of characters printed
 *
 */

int _printf(const char *format, ...)
{
	int num_chars, j;
	va_list list;
	char  c;

	num_chars = j = 0;

	if (!format)
		return (-1);

	if (format)
	{
		va_start(list, format);
		while (*(format + j) != '\0')
		{
			if (*(format + j) != '%')
			{
				c = *(format + j);
				num_chars = num_chars + write(1, &c, 1);
			}
			if (*(format + j) == '%')
			{
				if (*(format + j + 1) == 'c')
					num_chars = num_chars + _print_char(list);
				if (*(format + j + 1) == 's')
					num_chars = num_chars + _print_str(list);
				if (*(format + j + 1) == '%')
					num_chars = num_chars + write(1, &*(format + j + 1), 1);
				j++;
			}
			j++;
		}
	}
	va_end(list);
	return (num_chars);
}











