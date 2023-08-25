#include <stdlib.h>
#include "lists.h" 
/**
* function that frees a list_t list.
* @head: head of a list_t list to be freed
*/
void free_list(list_t *head) 
{
list_t *dom = head;
while (dom != NULL) 
{
list_t *next = dom->next;
free(dom->str); 
free(dom);      
dom = next;
}
}
