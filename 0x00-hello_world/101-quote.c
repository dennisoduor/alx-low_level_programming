/*
 * File: 101-quote.c
 * Auth: Dennis Oduor
 */

#include <unistd.h>

/**
 * main - Prints "and that piece of art is useful" - Dora Korpar, 2015-10-19",
 *                followed by a new line, to standard error.
 *
 * Return: Always 1.
 */
int main(void)
{
	fprintf(stderr,
			"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");

	return (1);
}