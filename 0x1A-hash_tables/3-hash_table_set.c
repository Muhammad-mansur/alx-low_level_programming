#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table
 * @key: The key string
 * @value: The value associated with the key (must be duplicated)
 *
 * Return: 1 if successful, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current;
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			 if (current->value == NULL)
				 return (0);
			 return (1);
		}
		current = current->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		  return 0;
	}

	new_node->value = strdup(value);
	 if (new_node->value == NULL)
	 {
		 free(new_node->key);
		 free(new_node);
		 return 0;
	 }

	  new_node->next = ht->array[index];
	  ht->array[index] = new_node;

	  return 1;
}
