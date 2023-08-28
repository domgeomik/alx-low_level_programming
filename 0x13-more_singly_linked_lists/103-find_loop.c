#include "lists.h"
/**
* find_listint_loop - finds the loop in a linked list
* @head: linked list to search for
*
* Return: address of the node where the loop starts, or NULL
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *my_SonSun = head;
listint_t *my_Etock = head;
if (!head)
return (NULL);
while (my_SonSun && my_Etock && my_Etock->next)
{
my_Etock = my_Etock->next->next;
my_SonSun = my_SonSun->next;
if (my_Etock == my_SonSun)
{
my_SonSun = head;
while (my_SonSun != my_Etock)
{
my_SonSun = my_SonSun->next;
my_Etock = my_Etock->next;
}
return (my_Etock);
}
}
return (NULL);
}
