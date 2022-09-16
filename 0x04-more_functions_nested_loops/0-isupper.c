#include "main.h"
/**
 *main - check if letter is uppercase
 *
 *@c : parameter int c
 *Return : 0 if not 1 if upper
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
