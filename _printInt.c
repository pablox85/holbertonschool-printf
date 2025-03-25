#include <unistd.h>
#include <stdarg.h>

int print_int(va_list arg)
{
	int d = va_arg(arg, int);

	if (d < 0)
	{
	write(1, "-", 1);
	d = -d;
	}

	//incompleto





}
