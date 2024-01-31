#include "main.h"

/**
 * _print_int - prints an integer
 * @arguments: variable of type va_list
 *
 * Return: number of characters printed
 */

int _print_int(va_list arguments)
{
	int num, num_temp, digits, n_chars, ch;

	num = va_arg(arguments, int);
	digits = 1;
	n_chars = 0;

	if (num < 0)
	{
		ch = '-';
		n_chars = n_chars + write(1, &ch, 1);
		num = -1 * num;
	}

	num_temp = num;

	while (num_temp > 9)
	{
		digits = digits * 10;
		num_temp = num_temp / 10;
	}

	while (digits > 0)
	{
		ch = ((num / digits) % 10) + '0';
		n_chars = n_chars + write(1, &ch, 1);
		digits = digits / 10;
	}

	return (n_chars);
}
