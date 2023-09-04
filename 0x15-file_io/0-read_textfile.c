#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>
/**
* read_textfile- Read text file  to STDOUT.
* @filename: Text file Being Read
* @letters: number of letters to be read
* Return: w- actual number of bytes read and printed
* 0 when function fail or filename is NULL.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *my_buf;
ssize_t my_fd;
ssize_t my_w;
ssize_t my_t;
my_fd = open(filename, O_RDONLY);
if (my_fd == -1)
return (0);
my_buf = malloc(sizeof(char) * letters);
my_t = read(my_fd, my_buf, letters);
my_w = write(STDOUT_FILENO, my_buf, my_t);
free(my_buf);
close(my_fd);
return (my_w);
}
