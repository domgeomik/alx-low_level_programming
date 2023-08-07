#include "main.h"
#include <stdlib.h>
/**
* argstostr - main entry
* @ac: int input
* @av: double pointer array
* Return: 0
*/
char *argstostr(int ac, char **av)
{
int i, n, r = 0, l = 0;
char *domstr;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (n = 0; av[i][n]; n++)
l++;
}
l += ac;
domstr = malloc(sizeof(char) * l + 1);
if (domstr == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (n = 0; av[i][n]; n++)
{
domstr[r] = av[i][n];
r++;
}
if (domstr[r] == '\0')
{
domstr[r++] = '\n';
}
}
return (domstr);
}
