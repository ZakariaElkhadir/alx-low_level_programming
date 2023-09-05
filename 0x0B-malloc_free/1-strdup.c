#include "main.h"
#include <stdlib.h>
char *_strdup(char *str){
	char *stay;	
	int i, n = 0;
	str = (char *)malloc(100 * sizeof(char));
	if (str == NULL)
		return NULL;
	i = 0;
	while (str[i] != '\0')
		i++;
	stay = malloc(sizeof(char) * (i + 1));

	if (stay == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
		stay[n] = str[n];

	return (stay);
}


return (str);
free (str);
}
