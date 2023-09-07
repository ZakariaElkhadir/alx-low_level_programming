#include "main.h"
#include <stdlib.h>
void *malloc_checked(unsigned int b)
{
	int* ptr;
	ptr = malloc(5* sizeof(int));

	if (ptr == NULL)
	{
		return 98;
	}
	else
	{
		return 0;
	}
}
