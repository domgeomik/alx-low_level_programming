#include "lists.h"
#include <stdio.h>
/**
* looped_listint_len - Counts the number of unique nodes
* in a looped listint_t linked list.
* @head: A pointer to the head of the listint_t to check.
*
* Return: If the list is not looped - 0.
* Otherwise - the number of unique nodes in the list.
*/
size_t repeat_moves(const listint_t *head)
{
const listint_t *my_Snare, *ny_Goat;
size_t nodes = 1;
if (head == NULL || head->next == NULL)
return (0);
my_Snare = head->next;
ny_Goat = (head->next)->next;
while (ny_Goat)
{
if (my_Snare == ny_Goat)
{
my_Snare = head;
while (my_Snare != ny_Goat)
{
nodes++;
my_Snare = my_Snare->next;
ny_Goat = ny_Goat->next;
}
my_Snare = my_Snare->next;
while (my_Snare != ny_Goat)
{
nodes++;
my_Snare = my_Snare->next;
}
return (nodes);
}
my_Snare = my_Snare->next;
ny_Goat = (ny_Goat->next)->next;
}
return (0);
}
/**
* print_listint_safe - Prints safely a listint list .
* @head: A pointer to the head of the listint list.
*
* Return: The Number of Nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
size_t my_StartNode, index = 0;
my_StartNode = repeat_moves(head);
if (my_StartNode== 0)
{
for (; head != NULL; my_StartNode++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (index = 0; index < my_StartNode; index++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (my_StartNode);
}
