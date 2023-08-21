#include "main.h"

/**
 * make_it - print to stout
 * @args: stander char to print
 * @c: what you want to print
 *
 * Return: number of char printed.
 * On error, return -1.
 */

int make_it(va_list args, char c)
{
	if (c == 'c')
	{
		return (print_char(args));
	}
	else if (c == 'i')
	{
		return (print_int(args));
	}
	else if (c == '%')
	{
		_putchar('%');
		return (1);
	}
	else if (c == 's')
	{
		return (print_string(args));
	}





	return (-1);
}
