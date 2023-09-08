#include "main"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: smallest number in the array
 * @max: lagrest value in the array
 *
 * Return: pointer to the address of the memory block
 */

int *array_range(int min, int max)
{
	int *suck;
	int i, j = 0;
	if (min > max) 
		return (NULL);
	suck = malloc(sizeof(*suck) * ((max - min) + 1);
			if (suck != NULL)
			{
			for (i = min; i <= max; i++) 
			{
			suck[j] = i;
			j++
			}
			return (suck);
			}
			}
