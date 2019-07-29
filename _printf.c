#include <stdarg.h>
#include "holberton.h"
/**
 * print_string - print string
 * @c: string char
 * Return: byte
 */
int print_string(unsigned char *c)
{
	int i = 0;

	while (c[i])
	_putchar(c[i++]);

	return (i);
}
/**
 * _printf - printf function
 * @format: formato and string
 * Return: number bytes
 */
int _printf(const char *format, ...)
{
	va_list ptr;
	int i = 0, byte = 0;
	char c;
	unsigned char *s;

	if (format == 0)
		return (-1);
	va_start(ptr, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
				c = va_arg(ptr, int);
				if (c)
					_putchar(c);
				i++;
				break;
				case 's':
				s = va_arg(ptr, unsigned char *);
				if (s)
					byte += print_string(s);
				else
					byte += print_string((unsigned char *)"(null)");
				byte--;
				i++;
				break;
				default:
					_putchar('%');
				break;
			}
		}
		else
			_putchar(format[i]);
		i++;
		byte++;
	} va_end(ptr);
	return (byte);
}
