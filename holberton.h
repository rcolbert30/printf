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
	char *op;
	int (*f)();
}op_t;

int _putchar(char c);

int _char (va_list ch);

int _str (va_list string);


#endif
