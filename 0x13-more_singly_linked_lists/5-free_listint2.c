#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* free_listint2 - frees linked list
* @head: pointer to the listint_t list to be freed
*/
void free_listint2(listint_t **head) 
{
listint_t *my_Current = *head;
listint_t *my_NodeNext;
while (my_Current != NULL)
{
my_NodeNext = my_Current->next;
free(my_Current);
my_Current = my_NodeNext;
}
*head = NULL;
}
