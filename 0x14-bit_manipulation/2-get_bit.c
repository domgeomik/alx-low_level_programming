#include "main.h"
/**
* get_bit - returns the value of a bit at an index in a decimal number
* @n: number to search
* @index: index of the bit
*
* Return: value of the bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
int my_BitValue;
if (index >= sizeof(unsigned long int) * 8) 
return (-1);
my_BitValue = (n >> index) & 1;
return (my_BitValue);
}
