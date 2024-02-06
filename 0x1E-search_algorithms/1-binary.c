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
	int i;

	if (array == NULL)
		return (-1);
	while (start <= end)
	{
		mid = (start + end) / 2; /*find mid index*/
		printf("Searching in array: ");
		for (i = start; i < end; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
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
