#include "holberton.h"
/**
*print_number - print number digit by digit
*@d: the int given
*Return: character by character
*/
int print_number(int d)
{
	unsigned int tmp;
	int con = 0;

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
		con += print_number(tmp / 10);
	}
	_putchar(tmp % 10 + '0');
	con++;
	return (con);
}
