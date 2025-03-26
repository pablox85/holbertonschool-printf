#include <unistd.h>
#include <stdarg.h>

int print_int(va_list arg)
{
	int d = va_arg(arg, int);
	int digito [11], contador = 0, i = 0;

	if (d == 0)
	{
		write(1, "0", 1);
			return (1);
	}
	if ( d < 0)
	{
		write(1, "-", 1);
			d = -d;
	}

	while (d > 0)
	{
		digito[contador] = (d % 10) + '0';
		d = d / 10;
		contador++;
	}
	for (i = contador -1; i >= 0; i--)
	{
	write(1, &digito[i], 1);
	}
	return(contador);

}
