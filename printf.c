#include "holberton.h"
/**
 * _printf - will perform the same operations as printf
 * @format: input
 * Return - the number of characters printed (excluding the null byte)
*/
int _printf(const char *format, ...)

	va_list arg_list;
	int kd = 0;

	op_t ops[] = {
		{"c", _char};
		{"s", _str};
		{NULL, NULL}
	};
	if (format == NULL)
		return;

	va_start (arg_list, format);

	kd = get_op_func(arg_list, format, ops);
	va_end (arg_list);
	return (kd);
}
