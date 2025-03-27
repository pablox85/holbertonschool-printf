#include <stdarg.h>
#include "main.h"
int _printf(const char *format, ...)
{
	int count = 0, i = 0;

va_list args;
	va_start(args, format);
	
	
	while(format[i] != '\0')
	{
		if (format[i] == '%')
		{	
			i++;
			if (format[i] == 'c')
			{
				count += _printChar(args);
			}
			else if (format[i] == '%')
			{
				count += write(1, '%', 1);
			}
			else if (format[i] == 's')
			{
				count += _printString(args);
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				count += _printInt(args);
			}
			else
			{
				count += write(1, '%',1);
				count += write(1, &format[i,1]);
			}
		}
		i++;
	}
	va_end(args);
	return (count);
}
