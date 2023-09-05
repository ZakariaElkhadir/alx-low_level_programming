#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *so;
	int i, n = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	so = malloc(sizeof(char) * (i + 1));

	if (so == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
		so[n] = str[n];

	return (so);
}

