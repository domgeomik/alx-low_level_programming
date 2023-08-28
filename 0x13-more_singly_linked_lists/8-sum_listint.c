#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* sum_listint - calculates  listint_t list sum of all the data 
* @head: first node in the linked list
*
* Return: resulting sum
*/
int sum_listint(listint_t *head)
{
if (head == NULL) 
{
return (0);
}
return head->n + sum_listint(head->next);
}
