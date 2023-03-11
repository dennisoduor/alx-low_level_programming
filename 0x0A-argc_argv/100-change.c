#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array containing the command-line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	int num_coinso;

	num_coins = 0;
	num_coins += cents / 25;  /* number of quarters */
	cents %= 25;             /* remainder after quarters are removed */
	num_coins += cents / 10;  /* number of dimes */
	cents %= 10;             /* remainder after dimes are removed */
	num_coins += cents / 5;   /* number of nickels */
	cents %= 5;              /* remainder after nickels are removed */
	num_coins += cents / 2;   /* number of twos */
	cents %= 2;              /* remainder after twos are removed */
	num_coins += cents;       /* number of ones */
	printf("%d\n", num_coins);
	return (0);
}

