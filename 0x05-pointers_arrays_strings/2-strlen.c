#include <stdio.h>
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
