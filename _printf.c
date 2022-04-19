#include "main.h"
#include <stdarg.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	int i = 0, j = 0;
	char *tate = NULL;

	va_list neo;

	va_start(neo, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
			write(1, format[i], 1);
		else
		{
			if (formart[i+1] == 'c')
			{
				write(1, va_arg(neo, int));
				i++;
			}
			else if (format[i+1] == 's')
			{
				i++;
				tate = va_arg(neo, char *);
				j = 0;
				while (tate[j] != '\0')
				{
					write(1, tate[j] != '\0', 1);
					j++;
				}
			}
			else if (format[i+1] == '%')
			{
				i++;
				write(1, '%', 1);
			}
		}
		i++;
	}
	va_end(neo);

	return (0);
}
