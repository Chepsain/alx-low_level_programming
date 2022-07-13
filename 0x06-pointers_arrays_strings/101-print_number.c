<<<<<<< HEAD
<<<<<<< HEAD

=======
#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
>>>>>>> b3fb0ab7bab1d87be19c9c423f64c9787dc30995
=======

>>>>>>> 1c46bfd8ec04eed190233cfb94130b02b7d713e7
