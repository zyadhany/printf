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

	va_list args;
    va_start(args, s);

	if (!s)
		return (-1);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != '%'){
			_putchar(s[i]);
			n++;
			continue;
		}

		i++;
		while (s[i] == ' ')
		{
			i++;
		}
		
		if(s[i] == '\0')
			return (-1);

		n += make_it(args,s[i]);

	}
	

	va_end(args);
	return (n);
}
