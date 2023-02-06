#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

/**
 * create_file - creates a file
 * @filename: accepts string
 * @text_content: accepts string
 * Return: returns int
 */

int create_file(const char *filename, char *text_content)
{
	int fd, write_count;
	mode_t mode = S_IRUSR | S_IWUSR;
	size_t text_length = 0;

	if (!(filename))
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, mode);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[text_length])
			text_length++;

		write_count = write(fd, text_content, text_length);
		if (write_count == -1 || write_count != text_length)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
