#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int prints = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (prints)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			prints = 1;
			node = node->next;

		}
	}

	printf("}\n");
}
