#include "main.h"
/**
* flip_bits - count the Number of Bit to change
* to get from one number to another
* @n: first number
* @m: second number
*
* Return: number of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, my_Record = 0;
unsigned long int my_NewMove;
unsigned long int exclusive = n ^ m;
for (i = 63; i >= 0; i--)
{
my_NewMove = exclusive >> i;
if (my_NewMove & 1)
my_Record++;
}
return (my_Record);
}
