#include "holberton.h"

/**
 * _putchar - prints a char.
 * @c: input char to print.
 * Return: char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

