#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h" 
list_t *add_node_end(list_t **head, const char *str) {
list_t *fresh = malloc(sizeof(list_t));
if (fresh == NULL) {
return NULL; 
}
fresh->str = strdup(str);
if (fresh->str == NULL) {
free(fresh);
return NULL; 
}
fresh->next = NULL;
if (*head == NULL) {
*head = fresh;
} else {
list_t *current = *head;
while (current->next != NULL) {
current = current->next;
}
current->next = fresh;
}
return fresh;
}
