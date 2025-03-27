#include <stdarg.h>
#include "main.h"
int _printf(const char *format, ...)
{
	int count = 0, i = 0;
	char porciento = '%';

va_list args;
	va_start(args, format);
	
	
	while(format[i] != '\0')
	{
		if (format[i] == '%')
		{	
			i++;
			if (format[i] == 'c')
			{
				count += print_char(args);
			}
			else if (format[i] == '%')
			{
				count += write(1, &porciento, 1);
			}
			else if (format[i] == 's')
			{
				count += print_string(args);
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				count += print_int(args);
			}
			else
			{
				count += write(1, &porciento,1);
				count += write(1, &format[i], 1);
			}
		}
		else
		{
			count += write(1, &format[i], 1);
		}
		i++;
	}
	va_end(args);
	return (count);
}
