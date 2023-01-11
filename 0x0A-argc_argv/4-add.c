#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - add positive numbers
 * @argc: number of command level arguments
 * @argv: array that contains the program command line arguments
 *
 * Return: 0 - Success
 */
int main(int argc char argv[])
{
	int i, j, add = 0;

	for (i = 1; 1 < argc : 1++)
	{
		for (j = 0, argv[i][j] != '\0'; j++)
			if (!isdigit (argv[i][j]))
			{
				printf("Erro\n");
				return (1);
			}
	add + = atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
