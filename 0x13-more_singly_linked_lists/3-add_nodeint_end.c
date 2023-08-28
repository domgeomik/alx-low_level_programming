#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* add_nodeint_end - adds a node at  linked list the end of a
* @head: pointer to the first element in the list
* @n: data to insert in the new element
*
* Return: pointer to the new node, or NULL if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n) 
{
listint_t *my_NewNode = malloc(sizeof(listint_t));
if (my_NewNode == NULL)
{
return (NULL);
}
my_NewNode->n = n;
my_NewNode->next = NULL;
listint_t *my_Current;
if (*head == NULL) 
{
*head = my_NewNode;
my_Current = *head;
}
else 
{
my_Current = *head;
for (; my_Current->next != NULL; my_Current = my_Current->next)
{
}
my_Current->next = my_NewNode;
}
return (my_NewNode);
}
