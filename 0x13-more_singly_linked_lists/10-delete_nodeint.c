#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index) 
{
listint_t *my_DelNode= malloc(sizeof(listint_t));
if (*head == NULL) 
{
return (-1);  
}
if (index == 0) 
{
listint_t *my_temp = *head;
*head = (*head)->next;
free(my_temp );
return (1);
}
return delete_nodeint_at_index(&(*head)->next, index - 1);
}
