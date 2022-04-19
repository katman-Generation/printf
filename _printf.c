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
	int (*pfunc)(va_list, counter *);
	const char *tate;
	va_list neo;
	counter cont = {0, 0, 0};

	register int count = 0;

	va_start(neo, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (tate = format; *tate; tate++)
	{
		if (*tate == '%')
		{
			tate++;
			if (*tate == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (get_flag(*tate, &cont))
				tate++;
			pfunc = get_print(*p);
			count += (pfunc)
				? pfunc(neo, &cont)
				: _printf("%%%c", *tate);
		}
		else
			count += _putchar(*tate);
	}
	_putchar(-1);
	va_end(neo);
	return (count);
