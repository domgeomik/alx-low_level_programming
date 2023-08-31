#include "lists.h"
/**
* insert_nodeint_at_index - insert new node in  linked list,
* at a given position
* @head: pointer to the first node in the list
* @idx: index where the new node is added
* @n: data to insert in the new node
*
* Return: pointer to the new node, or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *ufa_Files;
listint_t *not_ConsFile = *head;
ufa_Files = malloc(sizeof(listint_t));
if (!ufa_Files || !head)
return (NULL);
ufa_Files->n = n;
ufa_Files->next = NULL;
if (idx == 0)
{
ufa_Files->next = *head;
*head = ufa_Files;
return (ufa_Files);
}
for (i = 0; not_ConsFile && i < idx; i++)
{
if (i == idx - 1)
{
ufa_Files->next = not_ConsFile->next;
not_ConsFile->next = ufa_Files;
return (ufa_Files);
}
else
not_ConsFile = not_ConsFile->next;
}
return (NULL);
}
