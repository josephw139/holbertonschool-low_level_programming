#include "main.h"
#include <stdlib.h>
/**
 * *create_array - array of chars
 * @size: of array
 * @c: character
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = malloc((size + 1) * sizeof(char));

	if (array == NULL || size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);




}
