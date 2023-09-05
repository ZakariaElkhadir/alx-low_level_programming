#include "main.h"
#include <stdlib.h>
char *_strdup(char *str){

	str = (char *)malloc(100 * sizeof(char));
	_strdup("Holberton School!");
	_strdup("First, solve the problem. Then, write the code.");  
	_strdup(NULL);
	return (str);
	free (str);
}
