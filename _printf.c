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
			if (format[i] == 'c')
				count += print_char(args);
			else if (format[i] == '%')
				count += write(1, "%", 1);
			else if (format[i] == 's')
				count += print_string(args);
			else if (format[i] == 'd' || format[i] == 'i')
				count += print_int(args);
			else
			{
				count += write(1, "%", 1);
				count += write(1, &format[i], 1);
			}
		}
		else
			count += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
