#include <stdio.h>
#include "lists.h" 

/**
* print_list - function that prints all the elements of a list_t.
*/
size_t print_list(const list_t *h) {
size_t add_Up = 0;
while (h != NULL) {
if (h->str != NULL)
printf("%s\n", h->str);
else
printf("[0] (nil)\n");
h = h->next;
add_Up++;
}
return add_Up;
}
