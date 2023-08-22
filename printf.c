#include "main.h"

/**
 * _printf - print to stout
 * @s: stander string to print
 *
 * Return: number of char printed.
 * On error, return -1.
 */
int _printf(const char s, ...)
{
    int i, n = 0, j;
    charspef = "scid%%";

    va_list args;

    va_start(args, s);

    if (!s)
        return (-1);
}
int _printf(const char *s, ...)
{
	int i, n = 0, j;
	char *spef = "scid%%";

	va_list args;

	va_start(args, s);

	if (!s)
		return (-1);

	for (i = 0; s[i] != '\0'; i++)
	{
		int keep = 1;

		if (s[i] != '%')
		{
			_putchar(s[i]);
			n++;
			continue;
		}
		while (s[i] && keep)
		{
			i++;
			for (j = 0; spef[j] ; j++)
			{
				if (spef[j] == s[i])
					keep = 0;
			}
		}
		if (s[i] == '\0')
			return (-1);


		n += make_it(args, s[i]);

	}
	va_end(args);
	return (n);
}
