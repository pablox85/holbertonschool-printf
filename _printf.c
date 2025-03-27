#include <stdarg.h>
#include "_printInt.c"
#include "_printChar.h"
#include "_printString.h"
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
				char c = va_arg(args, int);
				count += _printChar(c);
			}
			else if (format[i] == 's')
			{
				char *s = va_arg(args, char *);
				count += _printString(s);
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				int num = va_arg(args, int);
				count += _printInt(num);
			}
			else if (format[i] == '%')
			{
				count += _printChar ('%');
			}
			else
			{
				count += _printChar('%');
				count += _printChar(format[i]);
			}
		}
		i++;
	}
	va_end(args);
	return (count);
}
