#include <stdarg.h>
#include "main.h"
/**
 * _printf - copia de printf
 * @format: cadena caracteres con especificadores
 * Return: caracteres impresos
 */
int _printf(const char *format, ...)
{
	int count = 0, i = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c': count += print_char(args); break;
				case '%': count += write(1, "%", 1); break;
				case 's': count += print_string(args); break;
				case 'd': 
				case 'i': count += print_int(args); break;
				default: 
					count += write(1, "%", 1);
					count += write(1, &format[i], 1);
					break;
			}
		}
		else
			count += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
