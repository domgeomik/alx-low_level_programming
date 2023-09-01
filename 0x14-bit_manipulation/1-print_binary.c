#include "main.h"
/**
* print_binary - print the Binary equivalent of a decimal number
* @n: number to print in binary
*/
void print_binary(unsigned long int n)
{
int i, my_Record = 0;
unsigned long int my_NewMove;
for (i = 63; i >= 0; i--)
{
my_NewMove = n >> i;
if (my_NewMove & 1)
{
_putchar('1');
my_Record++;
}
else if (my_Record)
_putchar('0');
}
if (!my_Record)
_putchar('0');
}
