#include "main.h"
#include <stdlib.h>

/**
 * *create_array - create array of chars, and initializes
 * it with a specific char.
 * @c: char to initialize
 * @size: number of byte to allocate
 *
 * Return: apointer to the array or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		;
		return (Null);
	while (size--)
	       array[size] = c;
	return (array);
}
