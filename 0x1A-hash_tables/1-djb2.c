#include "hash_tables.h"
/*
 *hash_djb2 - implemantation of the djb2 alghorithm
 *@str: string used to generete hash value
 *
 *Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{

	unsigned int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + c);
	}
	return (hash);
}
