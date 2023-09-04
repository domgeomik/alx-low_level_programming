#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>
/**
* append_text_to_file - Appends text at the end of a file.
* @filename: A pointer to the name of the file.
* @text_content: The string to add to the end of the file.
*
* Return: If the function fail or filename is NULL -1.
* If the file does not exist the user lacks write permissions - -1.
* Otherwise - 1.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int my_o, my_w, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
my_o = open(filename, O_WRONLY | O_APPEND);
my_w = write(my_o, text_content, len);
if (my_o == -1 || my_w== -1)
return (-1);
close(my_o);
return (1);
}
