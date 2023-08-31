#include "lists.h"
/**
* delete_nodeint_at_index - deletes a linked list node at certain index
* @head: pointer to the first element in the list
* @index: index of the node to delete
*
* Return: 1 (Success), or -1 (Fail)
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *not_ConsFile = *head;
listint_t *now_File = NULL;
unsigned int i = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(not_ConsFile);
return (1);
}
while (i < index - 1)
{
if (!not_ConsFile || !(not_ConsFile->next))
return (-1);
not_ConsFile = not_ConsFile->next;
i++;
}
now_File = not_ConsFile->next;
not_ConsFile->next = now_File->next;
free(now_File);
return (1);
}
