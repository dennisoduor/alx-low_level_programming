/*
 * File: 100-times_table.c
 * Auth: Dennis Oduor
 */

#include <stdio.h>

/**
 * print_times_table- Write a function that prints the n times table,
 * starting with 0.
 * @n: The number to begin counting at.
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int z;
		int r;
		int p;

		for (z = 0; z <= n; z++)
		{
			for (r = 0; r <= n; r++)
			{
				p = z * r;
				if (r == 0)
				{
					printf("%d,", p);
				}
				else if (r != n)
				{
					printf("%4d,", p);
				}
				else
				{
					printf("%4d", p);
				}
			}
		printf("\n");
		}
	}
}

