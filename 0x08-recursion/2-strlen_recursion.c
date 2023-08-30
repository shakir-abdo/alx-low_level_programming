#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: string to get the length of
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
