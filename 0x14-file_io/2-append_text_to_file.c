#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
  * append_text_to_file - appends text to the end of a file
  * @filename: name of the file
  * @text_content: NULL terminated string to add at the end of the file
  * Return: 1 on success, or;
  * -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, var_write, len;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	for (len = 0; text_content[len]; len++)
		;

	var_write = write(fd, text_content, len);
	if (var_write == -1)
		return (-1);

	close(fd);

	return (1);
}
