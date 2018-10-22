#include "holberton.h"
/**
 * _char - prints a character
 * @ch: va_list
 * Return: printed char
 */
int _char(va_list ch)
{
	return (_putchar(va_arg(ch, int)));
}
