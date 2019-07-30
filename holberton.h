#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
int switched(va_list ptr, const char *format, char c, unsigned char *s, int d);
int print_string(unsigned char *c);
int print_number(int d);
#endif
