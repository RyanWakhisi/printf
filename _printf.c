#include "main.h"

/**
 * _print - Printf function
 * @format: The args to the function.
 * Return: The printed chars.
 *
 */

int _printf(const char *format, ...);
{
	int count = 0;
	va_list args_list;

	if (format == NULL)
		return (-1);

	va_start(args_list, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0' || *format == ' ')
				break;

			if (*format == 'c')
				count += handle_c(args_list);
			else if (*format == 's')
				count += handle_s(args_list);
			else if (*format == '%')
				count += print_char('%');
			 i
		else
		{
			count += print_char(*format);
		}
		format++;
	}
	va_end(args_list;
	return (count);
}
