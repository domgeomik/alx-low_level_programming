#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* insert_nodeint_at_index - inserts a new node in linked list,
* at a given position
* @head: pointer to the first node in the list
* @idx: index where the new node is added
* @n: data to insert in the new node
*
* Return: pointer to the new node, or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n) 
{
if (head == NULL || idx == 0)
{
listint_t *don_NewNode = malloc(sizeof(listint_t));
if (don_NewNode== NULL) 
{
return (NULL);
}
don_NewNode->n = n;
don_NewNode->next = *head;
*head = don_NewNode;
return don_NewNode;
}
if (*head == NULL)
{
return (NULL);
}
(*head)->next = insert_nodeint_at_index(&((*head)->next), idx - 1, n);
return (*head);
}
