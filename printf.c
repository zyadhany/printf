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
	int i, n = 0, j, keep;
	char *spef = "scid%%";
	va_list args;

	va_start(args, s);
	if (!s)
		return (-1);
	for (i = 0; s[i] != '\0'; i++)
	{
		keep = 1;
		if (s[i] != '%')
		{
			_putchar(s[i]);
			n++;
			continue;
		}
		i++;
		while (s[i] == ' ')
			i++;
		if (s[i] == '\0')
			return (-1);
		for (j = 0; spef[j] ; j++)
			if (spef[j] == s[i])
				keep = 0;
		if (keep == 0)
			n += make_it(args, s[i]);
		else
		{
			n += 2 + (s[i - 1] == ' ');
			_putchar('%');
			if (s[i - 1] == ' ')
				_putchar(' ');
			_putchar(s[i]);
		}
	}
	va_end(args);
	return (n);
}
