#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - reads a textfile and prints to STDOUT
 * @filename: accepts string
 * @letters: accepts integer
 * Return: returns void
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_bytes, write_bytes;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buffer);
		return (0);
	}


	read_bytes = read(fd, buffer, letters);
	if (read_bytes < 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (write_bytes < 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (read_bytes);
}
