#include "search_algos.h"
/**
 * binary_search - function that searches for a value
 * in a sorted array of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located, otherwise function must return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t first, middle, last;

	if (array == NULL)
	{
		return (-1);
	}
	first = 0;
	middle = 0;
	last = size - 1;
	while (first <= last)
	{
		printf("Searching in array: ");
		for (i = first; i < last; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[last]);
		middle = (first + last) / 2;
		if (array[middle] > value)
		{
			last = middle - 1;
		}
		else if (array[middle] < value)
		{
			first = middle + 1;
		}
		else
		{
			return (middle);
		}
	}
	return (-1);
}
