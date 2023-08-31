#include "lists.h"
/**
* add_nodeint_end - adds a node at linked list the end 
* @head: pointer to the first element in the list
* @n: data to insert in the new element
*
* Return: pointer to the new node, or NULL if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ufa_File;
listint_t *not_ConsFile = *head;
ufa_File= malloc(sizeof(listint_t));
if (!ufa_File)
return (NULL);
ufa_File->n = n;
ufa_File->next = NULL;
if (*head == NULL)
{
*head = ufa_File;
return (ufa_File);
}
while (not_ConsFile->next)
not_ConsFile = not_ConsFile->next;
not_ConsFile->next = ufa_File;
return (ufa_File);
}
