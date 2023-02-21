/*
 * file:6-abs.c
 * auth: Dennis Oduor
 */
# include "main.h"
/**
 *   _abs-Write a function that computes the absolute value of an integer.
 *  @x: the value to check
 *  Return: Always 0.
*/
int _abs(int x)
{
	if (x < 0)
		return (x * -1);
	else
		return (x);
}

