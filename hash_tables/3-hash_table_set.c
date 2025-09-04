#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value
 * @key: key can not be an empty string
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *current;
	char *key_copy, *value_copy;

	if (!ht || !key || !*key || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			value_copy = malloc(strlen(value) + 1);
			if (!value_copy)
				return (0);
			strcpy(value_copy, value);
			free(current->value);
			current->value = value_copy;
			return (1);
		}
		current = current->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	key_copy = malloc(strlen(key) + 1);
	value_copy = malloc(strlen(value) + 1);
	if (!key_copy || !value_copy)
	{
		free(node);
		free(key_copy);
		free(value_copy);
		return (0);
	}
	strcpy(key_copy, key);
	strcpy(value_copy, value);
	node->key = key_copy;
	node->value = value_copy;
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
