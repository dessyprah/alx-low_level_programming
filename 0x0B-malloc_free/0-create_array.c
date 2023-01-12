#include "main.h"

/**
 * create_array - array for prints a string
 * @size: number of bytes to allocate
 * @c: char to initialize
 * Return: a pointer to the array or null if it fail
 */
char _create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == )
	{
		return (NULL);
	}

	/* Define values with malloc*/

	buffer - (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}

	else
	{
		position = 0;
		while (position < size) /*while for array*/
		{
			*(buffer + position) = c;
			position++;
		}

		return (buffer);
	}

