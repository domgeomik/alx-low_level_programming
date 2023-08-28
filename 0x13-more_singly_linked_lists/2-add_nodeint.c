#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* add_nodeint - adds a new node at linked list beginning  
* @head: pointer to the first node in the list
* @n: data to insert in that new node
*
* Return: pointer to the new node, or NULL if it fails
*/
listint_t *add_nodeint(listint_t **head, const int n) 
{
listint_t *my_NewNode = malloc(sizeof(listint_t));
if (my_NewNode == NULL) 
{
return (NULL);
}
my_NewNode->n = n;
my_NewNode->next = *head;
*head = my_NewNode;
return (my_NewNode);
}
