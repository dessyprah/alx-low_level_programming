#include "main.h"
#include <stdded.h>

/**
 * create_array - array for prints a string
 * @size: number of bytes to allocate
 * @c: char to initialize
 * Return: a pointer to the array or null if it fail
 */
char _create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array(size) = c;
	return (array);
}
