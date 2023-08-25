#include <stddef.h>
#include "lists.h"
/**
*list_len:returns the number of elements in a linked list_t list
*@h: Pointer to the first node in list_t list
*Return: Number of element in h
*/
size_t list_len(const list_t *h) 
{
size_t add_Up = 0;
while (h != NULL) 
{
h = h->next;
add_Up++;
}
return (add_Up);
}
