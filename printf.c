#include <unistd.h>
#include "main.h"

/**
 * _printf - print to stout
 * @s: stander string to print
 *
 * Return: number of char printed.
 * On error, return -1.
 */

int _printf(const char *s, ...)
{
	int i, n = 0;

	if (!s)
		return (-1);

	for (i = 0; s[i] ; i++, n++)
	{
		_putchar(s[i]);
	}
	

	return (n);
}
