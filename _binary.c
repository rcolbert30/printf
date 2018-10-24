#include <stdio.h>
/*
*/
int _binary(va_list binary)
{
	unsigned int num, decimal_num, remainder, base = 1, bin = 0, counter = 0;
	unsigned int kd = va_arg (binary, int);
	kd = num;

	while (num > 0)
    {
        remainder = num % 2;
        /*  To count no.of 1s */
        if (remainder == 1)
        {
            counter++;
        }
        bin = bin + remainder * base;
        num = num / 2;
        base = base * 10;
    }

	
	return (counter);
}
