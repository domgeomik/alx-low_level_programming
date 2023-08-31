#include "main.h"
/**
* flip_bits - count  Numbers of bits to change
* to get from one number to another
* @n: first number
* @m: second number
*
* Return: number of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, my_Record = 0;
unsigned long int my_Ufa;
unsigned long int my_SetAside = n ^ m;
for (i = 63; i >= 0; i--)
{
my_Ufa = my_SetAside>> i;
if (my_Ufa & 1)
my_Record++;
}
return (my_Record);
}
