#include <stdio.h>
void _puts(char *str)
{
str = "This is a String";
_puts(str);
return (0);
}
