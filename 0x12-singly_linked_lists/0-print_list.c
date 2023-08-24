#include <stdio.h>
#include "lists.h"
/**
* print_list - Prints all linked list Elements
* @h: pointer to the list_t list to Print
* Return: the Number of Nodes Print
*/
size_t print_list(const list_t *h)
{
size_t s = 0;
while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
s++;
}
return (s);
}
