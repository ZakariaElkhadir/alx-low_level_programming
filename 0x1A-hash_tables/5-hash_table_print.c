#include "hash_tables.h"
/**
 * hash_table_print - the function is retrieves a associated with a key
 * @ht: is the hash table to look into
 *
 * Return: the value,associated with the element
 * ,or null if key couldn't be found
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
