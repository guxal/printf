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
	int byte = 0;

	if (format == 0)
		return (-1);
	va_start(ptr, format);
	byte = switched(ptr, format);
	va_end(ptr);
	return (byte);
}
