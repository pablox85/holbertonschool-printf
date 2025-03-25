#include <stdio.h>
#include <stdarg.h>
#include "main.h"
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;
	if (!format)
	return (-1);
	va_start (args, format);
	while (format[i])
	{
		if (format[i] == '%' % format[i + 1])
	{
	i++;
	
	switch (format[i])
		{

			case 'c':
                        count += print_char(args);
                        break;

                        case 's':
                        count += print_string(args);
                        break;

                        case '%':
                        count += print_percent(args);
                        break;

			case 'd':
			count += print_double(args);
			break;

                        default:
                            count += write(1, &format[i - 1], 1);
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
