#include "main.h"

/**
 * print_int - print to stout
 * @args: stander char to print
 *
 * Return: number of int printed.
 * On error, return -1.
 */

 
int print_int(va_list args)
{
	int saged = va_arg(args, int) , n = 0, at = 0 , i;
	char s[20];
 
	if (saged == 0)
	{
		_putchar('0');
		return (1);
	}
 	if (saged < 0)
	{
		saged *= -1;
		n++;
		_putchar('-');
	}
 
	while (saged)
	{
		s[at++] = saged % 10 + '0';
		saged /= 10;
	}
 	for ( i = at - 1; i >= 0; i--)
	{
		n++;
		_putchar(s[i]);
	}
 
	return (n);
}