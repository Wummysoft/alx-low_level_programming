#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int num1, num2;
	num = 37;
	while (num1 < 67)
	{
		num2 = 37;
		while (num2 < 67)
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

