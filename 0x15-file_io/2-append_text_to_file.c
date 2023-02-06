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
	int fd;
	ssize_t written bytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0644);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	written_bytes = write(fd, text_content, strlen(text_content));
	close(fd);

	if (written_bytes == -1)
		return (-1);

	return (1);
}
