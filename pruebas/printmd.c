#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...)
{
    int i;

    for (i = 0; format[i] != '\0'; i++);
        
        
    write (1, format, i);

    return 0;
}

