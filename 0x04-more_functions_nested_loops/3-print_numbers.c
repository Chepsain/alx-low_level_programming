#include "main.h"
#include <stdio.h>

/**
<<<<<<< HEAD
 * print_numbers - Prints the numbers from 0-9.
=======
 * print_most_numbers - return  0-9 skips 2 and 4
>>>>>>> 62f2d7c9aaf33d7c818b8839f290ffc8cc8fc5ea
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
