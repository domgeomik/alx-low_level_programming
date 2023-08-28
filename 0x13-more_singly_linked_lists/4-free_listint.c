#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* free_listint - free linked list
* @head: listint_t list to be freed
*/
void free_listint(listint_t *head) 
{
listint_t *my_temp_pointer;
while (head != NULL) 
{
my_temp_pointer= head;
head = head->next;
free(my_temp_pointer);
}
}
