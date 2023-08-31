#include "main.h"
/**
* set_bit - set Bit at given index to 1
* @n: pointer to the number to change
* @index: index of the bit to set to 1
*
* Return: 1 for successfull , -1 for fail
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);
*n = ((1UL << index) | *n);
return (1);
}
