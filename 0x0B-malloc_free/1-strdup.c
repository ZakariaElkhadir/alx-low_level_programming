#include "main.h"
#include <stdlib.h>
char *_strdup(char *str){
	char *str;
		str = (char *)malloc(100 * sizeof(char));
	return (str);
	free (str);
}
