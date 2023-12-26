#include <stdio.h>
/**
* main - take two arguments
* @argc: argument count
* @argv: argument vector
*
* Return: return 0
*/
int main(int argc, char *argv[])
{
	printf("argc = %d\n", argc);
	for (int i = 0; i < argc; i++)
	{
		pritf("argv[%d] = %s\n", i, argv[i]);
	}
	return (0);
}
