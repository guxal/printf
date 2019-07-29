#include "holberton.h"
#include <stdarg.h>
/**
*switched - check all switch cases
*@ptr: pointer given
*@format: the arguments list
*Return: the byte number
*/
int switched(va_list *ptr, const char *format)
{
	int i = 0, byte = 0;
	char c;
	unsigned char *s;

	while (format[i])
	{
		if (!format[i])
			return (-1);
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
	}
	return (byte);
}
