#include "holberton.h"
/**
*print_number - print number digit by digit
*@d: the int given
*@con: the bytes given
*Return: character by character
*/
int print_number(int d, int con)
{
	unsigned int tmp;

	if (d < 0)
	{
		con++;
		_putchar('-');
		tmp = d * -1;
	}
	else
	{
		tmp = d;
	}
	if (d / 10)
	{
		con = print_number(tmp / 10, con);
	}
	_putchar(tmp % 10 + '0');
	con++;
	return (con);
}
