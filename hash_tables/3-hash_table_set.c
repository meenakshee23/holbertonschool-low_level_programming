#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - custom implementation of strdup
 * @str: string to duplicate
 * Return: pointer to new string or NULL
 */
char *_strdup(const char *str)
{
	char *dup;
	size_t len = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(len + 1);
	if (!dup)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}
/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value
 * @key: key can not be an empty string
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current;
	hash_node_t *new_node;
	char *new_value;

	if (ht == NULL || key == NULL || key[0] == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			new_value = _strdup(value);
			if (new_value == NULL)
				return (0);

			free(current->value);
			current->value = new_value;
			return (1);
		}
		current = current->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = _strdup(key);
	new_node->value = _strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
