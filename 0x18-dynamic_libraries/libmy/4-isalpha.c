/*
 * file: *
 * file: 3-islower.c
 * auth: Dennis Oduor
 */
# include "main.h"
/**
 *  _isalpha(int c)-Write a function that checks for alphabetic character.
 *  Returns 1 if c is a letter, lowercase or uppercase.
 *  @c: the character to be checked
 *  Return: Always 0.
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
