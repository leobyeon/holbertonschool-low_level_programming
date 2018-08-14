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

	for (strlen = 0; text_content[strlen]; strlen++)
		;

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (-1);
	}

	var_write = write(fd, text_content, strlen);
	if (var_write == -1)
		return (-1);

	close(fd);

	return (1);
}
