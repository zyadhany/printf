#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

int sum(int count, ...) {

    int s = 0;
    int i;

    va_list args;
    va_start(args, count);

    for (i = 0; i < count; i++) {
        int x = va_arg(args, int);
        s += x;
    }
    va_end(args);
    return s;
}