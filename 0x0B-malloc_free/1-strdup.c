#include "main.h"
#include <stdlib.h>
char *_strdup(char *str){
	int i;
	str = (char *)malloc(100 * sizeof(char));
	if (str == NULL)
		return NULL;
	i = 0;
	while (str[i] != '\0')
		i++;

	return (str);
	free (str);
}
