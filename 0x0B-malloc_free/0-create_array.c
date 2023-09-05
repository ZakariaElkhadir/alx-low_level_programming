#include "main.h"
#include <stdlib.h>
char *create_array(unsigned int size, char c)
{

	unsigned int i;
	char *ptr; 
	ptr = malloc(size * sizeof(char));
	if(size == 0 || ptr == NULL)

		return NULL;

	for(i = 0; i < size; i++)

		ptr[i] = c;
	return (ptr);

}
