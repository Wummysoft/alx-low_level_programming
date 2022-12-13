#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0
 */

int main(void)
{
	int num1, num2;

	num1 = 68;

	while (num1 < 78)
	{
		num2 = 78;
		while (num2 < 68)
		{
			putchar(num1);
			putchar(num2);
			num2++
			putchar(',');
			putchar(' ');
		}
			num1++;
	}

	putchar('\n');

	return (0);
}

