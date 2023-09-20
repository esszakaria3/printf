#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

/*
 * necessary libraries for the each task
*/
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


/*
 * Functions Prototypes
*/

int _printf(const char * const format, ...)
int _putchar(char c);
int printf_char(va_list args);
int printf_string(va_list args);
int _strlen(char *s)
int printf_HEXA(va_list val);
int printf_hexa(va_list val);
int printf_octal(va_list val);
int printf_int(va_list args);



#endif
