#include "main.h"

/**
 * _print_char - prints a character to stdout
 * @arguments: va_list type variable
 * Return: 1 on success, -1 on error
 *
 */
int _print_char(va_list arguments)
{
	int ch;

	ch = va_arg(arguments, int);
	return (write(1, &ch, 1));

}
