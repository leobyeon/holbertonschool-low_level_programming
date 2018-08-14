#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
  * create_file - creates a file
  * @filename: name of the file to create
  * @text_content: a NULL terminated string to write to the file
  * Return: 1, if successful, or;
  * -1 if failed
  */
int create_file(const char *filename, char *text_content)
{
	int fd, var_write, strlen;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	for (strlen = 0; text_content[strlen]; strlen++)
		;

	fd = creat(filename, O_RDWR);
	if (fd == -1)
		return (-1);

	close(fd);

	var_write = write(fd, text_content, strlen + 1);
	if (var_write == -1)
		return (-1);

	return (1);
}
