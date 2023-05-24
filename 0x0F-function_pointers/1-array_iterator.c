#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 *  on each element of an array
 *  @array: function
 *  @size: size of array
 *  *action: pointer to array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	do {
		action(*array);
		array++;
		i++;
	} while (i < size);
}