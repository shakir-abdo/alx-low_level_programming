#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *node;
unsigned long int x;

if (ht == NULL)
	return;

for (x = 0; x < ht->size; x++)
{
	node = ht->array[x];
	free_hash_list(node);
}
free(ht->array);
free(ht);
}


/**
 * free_hash_list - frees a hash_node_t list
 * @head: head of linked list
 */
void free_hash_list(hash_node_t *head)
{
	hash_node_t *current;
	hash_node_t *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current->key);
		free(current->value);
		free(current);
		current = next;
	}
}
