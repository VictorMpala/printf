#include "main.h"

/**
 * _print_str - prints a string to stdout
 * @arguments: va_list type variable
 * Return: length of the string
 */

int _print_str(va_list arguments)
{
	int len;
	char *str;

	str = va_arg(arguments, char *);
	len = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}

	return (write(1, str, len));

}
