#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
int tf = 0;
while (*s != '\0')
{
tf++;
s++;
}
return (tf);
}
