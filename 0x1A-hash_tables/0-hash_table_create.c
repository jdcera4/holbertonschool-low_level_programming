#include "hash_tables.h"

/*
* hash_table_create - create hash table
*
* @size: size 
* Return: table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t *tablet;

	if (size == 0)
	{
		return(NULL);
	}
	tablet= malloc(sizeof(hash_node_t));
	if (tablet == NULL)
	{
		return (NULL);
	}
	tablet->size = size;
	tablet->array = calloc(size, sizeof(hash_node_t *));
	if (tablet->array == NULL)
	{
		free(tablet);
		return(NULL);
	}
	return (tablet);
}
