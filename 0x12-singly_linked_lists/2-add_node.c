#include <string.h>
#include <stdlib.h>
#include "lists.h" 
/**
* Adds a new node at the beginning of a list_t list.
* @head: pointer to the list_t list
* Return: the address of the new element
* @str: str needs to be duplicated
*/
list_t *add_node(list_t **head, const char *str) 
{
list_t *fresh = malloc(sizeof(list_t));
if (fresh == NULL) 
{
return NULL; 
}
fresh->str = strdup(str);
if (fresh->str == NULL) {
free(fresh);
return NULL; 
}
fresh->next = *head;
*head = fresh;
return (fresh);
}
