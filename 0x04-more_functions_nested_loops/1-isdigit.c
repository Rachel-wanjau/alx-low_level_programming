#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: the input number as an integer
 * Return: 1 if c is a number (o to 9), 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
