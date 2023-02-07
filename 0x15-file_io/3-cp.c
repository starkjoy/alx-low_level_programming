#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#define BUFSIZE 1024

/**
 * main - copies data from file to file
 * @argc: agruments count
 * @argv: arguments passed
 * Return: returns int
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_from, close_to;
	char buf[BUFSIZE];
	ssize_t read_from, write_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);

	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((read_from = read(fd_from, buf, BUFSIZE)) > 0)
	{
		write_to = write(fd_to, buf, read_from);

		if (write_to == -1 || write_to != read_from)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (read_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %\n", argv[1]);
		exit(98);
	}

	close_from = close(fd_from);

	if (close_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	close_to = close(fd_to);

	if (close_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
