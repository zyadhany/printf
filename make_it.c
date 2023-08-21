#include "main.h"

/**
 * print_char - print to stout
 * @args: stander char to print
 * @c: what you want to print
 *
 * Return: number of char printed.
 * On error, return -1.
 */

int make_it(va_list args,char c)
{
	if (c == 'c')
    {
        return print_char(args);
    }
    else if (c == 'i')
    {
        return print_int(args);
    }else if (c == '%')
    {
        /*
            return 1
            and print %
        */
    }else if (c == 's')
    {
        /*
            take char until '\0' and print it
            make count for chat
            reeturn value
        */
        return print_string(args);
    }
    
    
    


	return (-1);
}
