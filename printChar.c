#include <unistd.h>
#include <stdarg.h>
#include "main.h"
int print_char (va_list arg)
{
	char c = va_arg(arg, int);
	return (write(1, &c, 1));
}


