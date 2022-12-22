#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: copy to
 * @src: copy from
 * Return: pointer to dest
 */
<<<<<<< HEAD
char *_strcat(char *dest, char *src);
=======
char *_strcat(char *dest, char *src)
>>>>>>> 0dc34bb7f3b1ae4d4f758eb4938569f5e6c7e8ef
{
	int i;
	int l;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	l = 0;
	while (src[l] != '\0')
	{
		dest[i] = src[l];
		i++;
		l++;
	}
<<<<<<< HEAD
	dest[i] '\0';

=======
	dest[i] = '\0';
>>>>>>> 0dc34bb7f3b1ae4d4f758eb4938569f5e6c7e8ef
	return (dest);
}
