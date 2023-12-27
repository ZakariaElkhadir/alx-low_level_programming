#include <stdio.h>
/**
* main - take argc and argv
* @argc: argument count
* @argv: argument vector
*
* Return: return 0
*/
int main(int argc, char *argv[])
{
(void) argv;
printf("%d", argc - 1);
return (0);
}
