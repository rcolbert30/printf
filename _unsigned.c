#include "holberton.h"
/**
 * _unsigned - prints an unsigned integer
 * @un: va_list
 * Return: 0
*/

int _unsigned(va_list unzinged)
{
	unsigned int kd;
	int one = 1, res = 0;

	kd = va_arg(unzinged, unsigned int);
	
	while (one != 0)
	{
		res += _putchar(kd / one + '0');
		kd %= one;
		one /= 10;
	}
	while (kd / tmp > 9)
	{
		kd *= 10;
	}
	return (res);
}
	
