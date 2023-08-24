#include <stdlib.h>
#include "lists.h"
/**
* list_len - Returns Numbers of linked List Elements
* @h: Pointer to the list_t list
* Return: Number of element in h
*/
size_t list_len(const list_t *h)
{
size_t n = 0;
while (h)
{
n++;
h = h->next;
}
return (n);
}
