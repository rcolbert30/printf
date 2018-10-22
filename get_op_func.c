#include "holberton.h"
/**
 * get_ops - determines which datat type to print based on specifier
 * @format: input
 * @arr: op arr
 * @arg_list: variadic list
 * Return: correct function that will perfrom operation
 */
int get_ops(const char *format, operations_t *arr, va_list arg_list)
{
	int kd = 0;
	int a = 0;
	int b = 0;

	char string;

	/* use string to compare inputed character */
	string = format[a];
	/* while there is an input */
	while (string)
	{
		if (string == '%')
		{
			b = 0;
			a++;
			string = format[a]; /*set variable = to input */
			while (arr[b].ptr && string != *(arr[b].ptr))
			{
				b++;
			}
			if (arr[b].ptr)
				kd += arr[b].f(arg_list);
			else
			{
				if (!string)
					return (-1);
				if (string != '%')
					kd += _putchar('%');
				kd += _putchar(string);
			}
		}
		else
			kd += _putchar(string);
		a++; /* if theres no percent sign keep incrementing through the input */
		string = format[a]; /* set variable = to input */
	}
	return (kd);
}

