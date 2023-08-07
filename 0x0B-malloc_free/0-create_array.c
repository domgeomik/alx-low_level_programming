#include "main.h"
#include <stdlib.h>
/**
* create_array - create array of size size and assign char c
* @size: size of array
* @c: char to assign
* Description: create array of size size and assign char c
* Return: pointer to array, NULL if fail
*
*/
char *create_array(unsigned int size, char c)
{
char *arraychr;
unsigned int i;
arraychr = malloc(sizeof(char) * size);
if (size == 0 || arraychr == NULL)
return (NULL);
for (i = 0; i < size; i++)
arraychr[i] = c;
return (arraychr);
}
