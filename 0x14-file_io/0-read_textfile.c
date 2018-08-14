#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
  * read_textfile - reads a text file and prints it to the
  * POSIX standard output
  * @filename: name of the file
  * @letters: number of letters it should read and print
  * Return: actual number of letters it could read and print, or;
  * 0 if filename is NULL;
  * 0 if write fails or does not write the expected amount of bytes
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, var_read, var_write;
	char *buf;

	if (!filename)
		return (0);

	buf = malloc(letters * sizeof(char));
	if (!buf)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	var_read = read(fd, buf, letters);
	if (var_read == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}

	close(fd);

	var_write = write(STDOUT_FILENO, buf, var_read);

	if (var_read != var_write)
	{
		free(buf);
		return (0);
	}
	free(buf);

	return (var_write);
}
