#include "hash_tables.h"
/**
 * hash_table_create - function that creates
 * a hash table with a given size
 * @size: size of the hash table array
 * Return: a pointer to the newly created hash table
 * otherwise NULL if the function fails
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table;
hash_node_t **array;
unsigned long int i;
table = malloc(sizeof(hash_table_t));
if (table == NULL)
return (NULL);
array = malloc(sizeof(hash_node_t *) * size);
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
array[i] = NULL;
table->array = array;
table->size = size;
return (table);
}
