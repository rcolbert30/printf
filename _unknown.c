#include "holberton.h"
/**
 * _unknown - prints reverse
 * @unk: va_list
 * Return: printed rev
 */
int _unknown(va_list unk)
{
        char *tmp;
        int i, n, str_count = 0;

        tmp = va_arg(unk, char *);

        for (i = 0; tmp[i] != '\0'; i++)
                str_count++;

        for (n = (str_count - 1); n >= 0; n--)
        {
                _putchar(tmp[n]);
        }

	return (0);
}
