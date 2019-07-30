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
	int byte = 0, d = 0;
	char c = '\0';
	unsigned char *s = 0;

	if (format == 0)
		return (-1);
	va_start(ptr, format);
	byte = switched(ptr, format, c, s, d);
	va_end(ptr);
	return (byte);
}
