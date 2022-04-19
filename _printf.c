#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 * Description: this function will call the get_print() function that will
 * determine which printing function to call depending on the conversion
 * specifiers contained into fmt
 * Return: length of the formatted output string
 */

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
