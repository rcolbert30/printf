#include "holberton.h"
/**
 * _decimal - prints a dec/int
 * @dec: va_list
 * Return: printed dec
 */
int _decimal(va_list dec)
{
	int n = 1, tmp;
	unsigned int res;

	tmp = va_arg(dec, int);

	if (tmp < 0)
	{
		_putchar('-');
		res = tmp * -1;
	}
	else
		res = tmp;
	while ((res / n) > 9)
		n *= 10;

	while (n != 0)
	{
		_putchar(res / n + '0');
		res %= n;
		n /= 10;
	}
	return (0);
}
