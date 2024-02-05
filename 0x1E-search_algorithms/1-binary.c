#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array:  pointer to the first element of the array
 * @size: size of array
 * @value: value to be searched
 * Return: -1 if failed or index of value
 */
int binary_search(int *array, size_t size, int value)
{
	int start = 0, end = size - 1, mid;

	if (array == NULL)
		return (-1);
	mid = (start + end) / 2; /*find mid index*/

	while (start < end)
	{
		if (value == array[mid])
		{
			return (mid);
		}
		else if (value < array[mid])
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}
	return (-1); /*if value not found*/
}
