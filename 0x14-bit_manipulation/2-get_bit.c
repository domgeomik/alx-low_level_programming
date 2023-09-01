#include "main.h"
/**
* get_bit - Returns the value of a Bit at an index in a decimal Number
* @n: number to search
* @index: index of the bit
*
* Return: value of the bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
int my_Values;
if (index > 63)
return (-1);
my_Values = (n >> index) & 1;
return (my_Values);
}
