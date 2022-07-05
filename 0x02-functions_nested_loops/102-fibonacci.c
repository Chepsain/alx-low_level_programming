#include <stdio.h>


/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
long int i, j, k, next;
j = 1;

k = 2;

<<<<<<< HEAD
		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
=======
for (i = 1; i <= 50; ++i)
{
if (j != 20365011074)
{
printf("%ld, ", j);
}
else
{
printf("%ld\n", j);
}
next = j + k;
j = k;
k = next;
}
return (0);
>>>>>>> 81d2a3318aa16623093cde02506630a04948a6bc
}
