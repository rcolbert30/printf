#include "holberton.h"

/**
* get_ops - determines which datat type to print based on specifier
* @format: input 
* @structs: an array of structs the contain the print specifier
* @specs: argument list containing print specifiers
* Return: correct function that will perfrom operation
*/
int get_ops(const char *format, operations_t *arr, va_list arg_list)
{
        int kd = 0; 
	int a = 0; 
	int b = 0;

        char string;

        string = format[a];/* use string to compare inputed character */

        while (string) /*while there is an input */
        {
                if (string == '%') /* check to see if char inputed is
a percent sign */
                {
                        b = 0; /* use to match specifier with element in
struct */
                        a++;/* this will increment to the next character
after we have found percent */
                        string = format[a]; /*set variable = to input */
                        while (arr[b].ptr && string != *(arr[b].ptr)) /* while were
in our struct & it doesnt match our specifier */
                        {
                                b++; /* keep incrementing through our array
until we dinf a match */
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
                string = format[a]; /*set variable = to input */
        }
        return (kd);
}

