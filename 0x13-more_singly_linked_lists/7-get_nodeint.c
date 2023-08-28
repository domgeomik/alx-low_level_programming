#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* get_nodeint_at_index - returns  linked list node at a certain index 
* @head: first node in the linked list
* @index: index of the node to return
*
* Return: pointer to the node we're looking for, or NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index) 
{
if (head == NULL || index == 0) 
{
return (head);
}
return get_nodeint_at_index(head->next, index - 1);
}
