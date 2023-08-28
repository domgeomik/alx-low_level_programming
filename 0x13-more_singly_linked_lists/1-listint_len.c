#include <stddef.h>
#include "lists.h"
/**
* listint_len - returns linked lists number of elements 
* @h: linked list of type listint_t to traverse
*
* Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
if (h == NULL) 
{
return (0);
}
return 1 + listint_len(h->next);
}
