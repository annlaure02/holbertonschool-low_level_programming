#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 *
 * @ht: the hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	char coma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (coma == 1)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			coma = 1;
		}
	}
	printf("}\n");
}
