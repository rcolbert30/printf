#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct op - selects the correct operation to perform
 * @op: operator
 * @f: pointer to function
 */

typedef struct ops
{
	char *ptr;
	int (*f)();
}operations_t;

int _putchar(char c);

int _char(va_list ch);

int _str(va_list string);

int _decimal(va_list dec);

int _unknown(va_list unk);

int get_ops(const char *format, operations_t *structs, va_list arg_list);

int _printf(const char *format, ...);
#endif

