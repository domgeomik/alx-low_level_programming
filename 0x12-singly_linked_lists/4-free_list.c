#include <stddef.h>
#include <stdlib.h>
#include "lists.h" 
void free_list(list_t *head) {
list_t *temp = head;
while (temp != NULL) {
list_t *next = temp->next;
free(temp->str); 
free(temp);      
temp = next;
}
}
