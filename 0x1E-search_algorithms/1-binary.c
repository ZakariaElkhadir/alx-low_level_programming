#include "search_algos.h"

/**
 * print_array - prints it
 * @array: array to print
 * @start: start of array
 * @end: end of array
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array:");
	for (i = start; i <= end; i++)
	{
		if (i != end)
			printf(" %d,", array[i]);
		else
			printf(" %d\n", array[i]);
	}
}

/**
 * recursive_binary_search - recursively search using binary algo
 * @array: array to search
 * @l: left most value
 * @r: right most value
 * @val: value to search
 *
 * Return: index or -1 if not found
 */

int recursive_binary_search(int *array, size_t  l, size_t  r, int val)
{
	size_t  mdl;

	if (r >= l)
	{
		mdl = l + (r - l) / 2;
		print_array(array, l, r);
		if (array[mdl] == val)
			return (mdl);
		if (array[mdl] > val)
			return (recursive_binary_search(array, l, mdl - 1, val));
		return (recursive_binary_search(array, mdl + 1, r, val));
	}
	return (-1);
}
/**
 * binary_search- searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: The index of the value if found, -1 if not found or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (recursive_binary_search(array, 0, size - 1, value));
}
