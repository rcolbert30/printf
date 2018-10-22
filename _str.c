#include "holberton.h"

/**
 * _str - prints a string to the stdout
 * @string: argument passed to return as a string
 * Return: number of char printed
 */
int _str(va_list string)
{
	int kd = 0;
	char *sfo;

	sfo = va_arg(string, char *);

	while (sfo[kd])
		kd += _putchar(sfo[kd]);

	return (kd);
}
