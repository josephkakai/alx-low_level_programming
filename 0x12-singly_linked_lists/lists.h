#ifndef _LISTS_H_
#define _LISTS_H_
#include <stddef.h>
#include <stdio.h>
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
int _putchar(char);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
#endif /*_LIST_H_*/