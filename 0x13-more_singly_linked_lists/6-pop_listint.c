#include "lists.h"
/**
* pop_listint - deletes the linked list at head node  
* @head: pointer to the first element in the linked list
*
* Return: the data inside the elements that was deleted,
* or 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
listint_t *not_ConsFile;
int num;
if (!head || !*head)
return (0);
num = (*head)->n;
not_ConsFile = (*head)->next;
free(*head);
*head = not_ConsFile;
return (num);
}
