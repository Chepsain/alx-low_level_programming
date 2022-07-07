#include <stdio.h>

/**
 * main - Prints out the larger prime factor of 612852475143
 * Return: return 0 with success.
 */

int main(void)
{
	long i;

	long num = 612852475143;

	for (i = 2; i < num; i++)
	{
		if (num % 1 == 0)
		{
			num /= i;
		}
	}
	printf("%li\n", num);

	return (0);
}
