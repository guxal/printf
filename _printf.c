#include <stdarg.h>
#include "holberton.h"
/**
 * print_string - print string
 * @c: string char
 */
void print_string(unsigned char *c)
{
	int i = 0;

	while (c[i])
	_putchar(c[i++]);
}
/**
 * _printf - printf function
 * @format: formato and string
 * Return: number bytes
 */
int _printf(const char *format, ...)
{
	va_list ptr;
	int i = 0;

	va_start(ptr, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
				_putchar(va_arg(ptr, int));
				i++;
				break;
				case 's':
				print_string(va_arg(ptr, unsigned char *));
				i++;
				break;
				default:
				break;
			}
		}
		else
		{
			_putchar(format[i]);
		}

		i++;
	}

	va_end(ptr);
	return (i - 1);
}
