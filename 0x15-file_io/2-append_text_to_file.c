#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - append text to file
 * @filename: accepts string
 * @text_content: accepts string
 * Return: returns int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_count;
	size_t text_length = 0;

	if (!(filename))
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[text_length])
			text_length++;

		write_count = write(fd, text_content, text_length);
		if (write_count == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (-1);
}
