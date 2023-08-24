#include <stddef.h>
#include "lists.h"
size_t list_len(const list_t *h) {
size_t add_Up = 0;
while (h != NULL) {
h = h->next;
add_Up++;
}
return add_Up;
}
