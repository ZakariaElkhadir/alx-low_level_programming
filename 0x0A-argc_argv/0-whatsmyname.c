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
  int i;
	printf("argc = %d\n", argc);
	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	return (0);
}
