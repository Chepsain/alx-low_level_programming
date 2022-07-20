#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to check
 *
 * Return: string length
 */

int _strlen_recursion(shar *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
