#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *gh;
	int i, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = b = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[b] != '\0')
		ci++;
	gh = malloc(sizeof(char) * (i + b + 1));

	if (gh == NULL)
		return (NULL);
	i = b = 0;
	while (s1[i] != '\0')
	{
		gh[i] = s1[i];
		i++;
	}

	while (s2[b] != '\0')
	{
		gh[i] = s2[b];
		i++, b++;
	}
	gh[i] = '\0';
	return (gh);
}

