/*
 * file: *
 * file: 3-islower.c
 * auth: Dennis Oduor
 */
# include "main.h"
/**
 *  _islower-Write a function that checks for lowercase character.
 *  Returns 1 if c is lowercase
 *  @c: the character to be checked
 *  Return: Always 0.
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
