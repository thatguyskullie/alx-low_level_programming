#include "main.h"

/**
 * _isupper - checks if a character is upper case
 * @c: The chracter to check
 * Return: 1 if uppercase 0 otherwise
 */
int _isupper(char c)
{
	if (c < 65 || c > 90)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}