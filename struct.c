#ifndef MAIN_H
#define MAIN_H
#include "main.h"
#include <unistd.h>
#include <stdarg.h>

int print_string (va_list arg)
{
	char *str = va_arg(arg, char*);
	int i = 0;

	if (!str)
		str = "(null)";

	while (str[i])
		write(1, &str[i++], 1);
	return (i);
}

int print_percent (va_list arg)
{
	(void)arg;
	return write(1, "%", 1);
}

int print_char (va_list arg)
{
	char c = va_arg(arg, int);
	return write(1, &c, 1);
}

int print_double (va_list arg)
{
	char buffer [50];
	double f = va_arg(arg, double);
	int len = snprintf(buffer, sizeof(buffer), "%f", f);
       return write(1, buffer, len);	
}

int print_int(va_list arg)
{
	char buffer [50];
	int num = va_arg(arg, int);
	int len = snprintf(buffer, sizeof(buffer), "%d", num);

	return 

#endif
