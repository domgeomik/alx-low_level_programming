#include "main.h"
/**
* get_endianness - check if machine is little or big endlessness
* Return: 0 for big, 1 for little
*/
int get_endianness(void)
{
unsigned int z = 1;
char *k = (char *) &z;
return (*k);
}
