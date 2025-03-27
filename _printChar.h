#include <unistd.h>
#include <stdarg.h>

int print_char (va_list arg)
{
	char c = va_arg(args, int);
	return (write(1, &c, 1));
}


