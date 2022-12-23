#include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: input
 * Return: the value of n
 */
char *leet(char *);
{
	int i, l;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (l = 0; l < 10; l++)
		{
			if (n[i] == s1[l])
			{
				n[i] = s2[i];
			}
		}
	}
	return (n);
}
