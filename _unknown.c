#include "holberton.h"
/*
 * _char - prints a character
 * @ch:
 * Return - printed char
*/
int _unknown(va_list unk)
{
	char *tmp;

	tmp = va_arg(unk, char *);

	tmp += _putchar('%');
	tmp += _putchar('r');

	return (0);
}
