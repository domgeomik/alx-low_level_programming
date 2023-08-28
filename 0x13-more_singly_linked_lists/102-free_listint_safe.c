#include "lists.h"
/**
* free_listint_safe - free linked list
* @h: pointer to the first linked list node in the
*
* Return: number of elements in the freed list
*/
size_t free_listint_safe(listint_t **h)
{
size_t len = 0;
int diff;
listint_t *my_movetemp;
if (!h || !*h)
return (0);
while (*h)
{
diff = *h - (*h)->next;
if (diff > 0)
{
my_movetemp = (*h)->next;
free(*h);
*h = my_movetemp;
len++;
}
else
{
free(*h);
*h = NULL;
len++;
break;
}
}
*h = NULL;
return (len);
}
