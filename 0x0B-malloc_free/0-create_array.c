#include "main.h"
char *create_array(unsigned int size, char c)
{
	int *ptr = malloc (4* sizeof(char));
	if(size == 0)
	{
		return NULL;
	}
	else{
		return ptr;
	}
}
