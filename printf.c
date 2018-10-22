#include "holberton.h"
/**
 * _printf - will print based on input (should act exaclty as printf in stdio
 * @format: input
 * Return: correct data type to print to stdout
 */
int _printf(const char *format, ...)
{
        va_list arg_list; /* argument list that will print data type */
        int kd;

        operations_t specs[] = { /*array of structs that contain character specifier
as well as corresponding function that will carry out operation*/
                {"c", _char},
                {"s", _str},
		{"d", _decimal},
		{"i", _decimal},
		{"r", _unknown},
                {NULL, NULL}
        };
        if (format == NULL)
                return (-1);

        va_start(arg_list, format); /*start argument list and co*/

        kd = get_ops(format, specs, arg_list);

        va_end(arg_list);
        return (kd);
}
