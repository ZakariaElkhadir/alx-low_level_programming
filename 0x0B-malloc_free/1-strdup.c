#include "main.h"
#include <stdlib.h>
char *_strdup(char *str){

	str = (char *)malloc(100 * sizeof(char));
	if (str == NULL)
		return NULL;

	return (str);
	free (str);
}
