#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>
/**
* create_file - Creates a file.
* @filename: A pointer to Name of file to create.
* @text_content: A pointer to a string to write to the file.
*
* Return: If the function fails - -1.
* Otherwise - 1.
*/
int create_file(const char *filename, char *text_content)
{
int my_fd, my_w, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
my_fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
my_w = write(my_fd, text_content, len);
if (my_fd == -1 || my_w == -1)
return (-1);
close(my_fd);
return (1);
}
