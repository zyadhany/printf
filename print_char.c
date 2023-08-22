#include "main.h"

/**
 * print_char - print to stout
 * @args: stander char to print
 *
 * Return: number of char printed.
 * On error, return -1.
 */

int print_char(va_list args)
{
	char saged = va_arg(args, int);

	_putchar(saged);
	return (1);
}
