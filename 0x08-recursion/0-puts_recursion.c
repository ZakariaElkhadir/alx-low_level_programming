#include <stdio.h>
void _puts_recursion(char *s);
void _puts_recursion(char *s)
{
printf("%s\n", s);
}
int main(void)
{
const char *message = "Hello, Engineers";
void _puts_recursion(message);
return (0);
}
