#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly linked list
 * @next: the points to the next node
 * @len: the length of the string
 * @str: string - malloc'ed string
 * Description: single linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
