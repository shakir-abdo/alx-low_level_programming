#include "hash_tables.h"
/**
 * hash_table_print - prints hashtable
 * @ht: the hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{

unsigned long int x;
short int comma = 0;
hash_node_t *node;

if (ht == NULL)
	return;

putchar('{');
for (x = 0; x < ht->size; x++)
{
	node = ht->array[x];
	while (node != NULL)
	{
		if (comma)
			printf(", ");

		printf("'%s': '%s'", node->key, node->value);
		node = node->next;

		if (comma == 0)
			comma = 1;
	}
}
printf("}\n");
}
