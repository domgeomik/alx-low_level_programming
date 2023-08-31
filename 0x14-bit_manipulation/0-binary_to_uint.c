#include <stdio.h>
#include "main.h"
/**
* binary_to_uint - Converts binary number to an Unsigned int Value
* @b: string containing the Binary Number
*
* Return: the converted number
*/
unsigned int binary_to_uint(const char *b) 
{
if (b == NULL)
return (0);
unsigned int my_Answer = 0;
while (*b != '\0') 
{
if (*b == '0' || *b == '1') 
{
my_Answer = my_Answer * 2 + (*b - '0');
b++;
} else 
{
return (0);  
}
}
return (my_Answer);
}
