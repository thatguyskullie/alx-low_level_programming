#include "main.h"

/**
 * _isdigit - writes the character c to stdout
 * @c: The character check
 * Return: 1 if digit else 0.
 */
int _isdigit(int c)
{
	if (c > 0 || c < 10)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
