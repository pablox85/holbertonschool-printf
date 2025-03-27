#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);

int _printChar (va_list args);
int _printSring (va_list args);
int print_percent (va_list args);
int print_double (va_list args);
int _printInt (va_list args);

#endif
