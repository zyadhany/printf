#include "main.h"

/**
 * print_string - print to stout
 * @args: stander char to print
 *
 * Return: number of char printed.
 * On error, return -1.
 */

int print_string(va_list args)
{
	char *saged = va_arg(args, char *);
	int i;

	for (i = 0; saged[i] ; i++)
	{
		_putchar(saged[i]);
	}
	

	return (i);
}
