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
	int fop, frd, fwr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fop = open(filename, O_RDONLY);
	if (fop < 0)
	{
		free(buffer);
		return (0);
	}

	frd = read(fop, buffer, letters);
	if (frd < 0)
	{
		free(buffer);
		return (0);
	}

	fwr = write(STDOUT_FILENO, buffer, frd);
	free(buffer);
	close(fop);

	if (fwr < 0)
		return (0);
	return ((ssize_t)frd);
}
