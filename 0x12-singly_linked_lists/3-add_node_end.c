#include <string.h>
#include <stdlib.h>
#include "lists.h" 
/**
* adds a new node at the end of a list_t list.
* @head: double pointer to the list_t list
* Return: address of the new element
* @str: string to Put in the New Node
*/
list_t *add_node_end(list_t **head, const char *str) 
{
list_t *fresh = malloc(sizeof(list_t));
if (fresh == NULL) 
{
return NULL; 
}
fresh->str = strdup(str);
if (fresh->str == NULL) 
{
free(fresh);
return NULL; 
}
fresh->next = NULL;
if (*head == NULL) 
{
*head = fresh;
} else 
{
list_t *ufa = *head;
while (ufa->next != NULL) 
{
ufa = ufa->next;
}
ufa->next = fresh;
}
return (fresh);
}
