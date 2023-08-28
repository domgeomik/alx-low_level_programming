#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* pop_listint - deletes  linked list head node 
* @head: pointer to the linked list first element
*
* Return: the data inside the elements that was deleted,
* or 0 if the list is empty
*/
int pop_listint(listint_t **head) 
{
if (*head == NULL) 
{
return (0);
}
int value = (*head)->n;
listint_t *my_temp = *head;
*head = (*head)->next;
free(my_temp);
return (value);
}
