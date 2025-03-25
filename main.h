#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);

int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_double (va_list args);
int print_int (va_list args);

#endif
