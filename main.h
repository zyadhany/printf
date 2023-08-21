#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>


int _printf(const char *format, ...);
int _putchar(char c);

int make_it(va_list args, char c);
int print_int(va_list args);
int print_char(va_list args);
int print_string(va_list args);


#endif
