#include "main.h"

/**
 * islower - Shows 1 if the character is lowercase
 * and shows 0 if not
 *
 *
 * Return: 1 for lowercase character. 0 for the rest.
 */
int islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
