#include "holberton.h"
/**
 * _printf - will perform the same operations as printf
 * @format: input
 * Return - the number of characters printed (excluding the null byte)
*/
int _printf(const char *format, ...)

	va_list arg_list;
	int i = 0, n = 0, kd = 0;

	op_t ops[] = {
		{"c", _char},
		{"s", _str},
		{"%", _percent},
		{"d", _decimal},
		{"i", _integer},
		{"u", _unsigned},
		{"o", _unsigned_octal},
		{"p", _address},
		{"r", _unknown},
		{NULL, NULL}
	};

	if (format == NULL)
		return;
	
	va_start (arg_list, format);

	/*prints string */
	while (format && format[n])
	{
		if (format[n] != '%')
		{
			_putchar(format[n]);
		}
		else
		{
			n++;
			/* prints specified format*/
			while (ops[i].op)
			{
				if (*(ops[i].op) == *format)
					return (op_s[i].f);
				i++;
			}
		}
		n++;
	}

	kd = get_op_func(arg_list, format, ops);
	va_end (arg_list);
	return (kd);
}
