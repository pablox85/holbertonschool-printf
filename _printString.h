#include <unistd.h>
#include <stdarg.h>

int print_string (va_list arg)
{
	int i = 0;
	int counter = 0;
	char *s = va_arg(arg, char*);

	if (s == NULL)
		s = "(null)";

	while (s[i] !='\0')
	{
		write(1, &s[i], 1);
		counter++;
		i++;
	}

	return counter;
}

