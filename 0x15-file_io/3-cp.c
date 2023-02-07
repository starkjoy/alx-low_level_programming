#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>
#include <errno.h>

/**
 * main - copies data from file to file
 * @argc: agruments count
 * @argv: arguments passed
 * Return: returns an int
 */

int open_file(const char *file, int flags);

int main (int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open_file(argv[1], O_RDONLY);
	fd_to = open_file(argv[2], O_WRONLY | O_TRUNC | O_CREAT);

	copy_file(fd_from, fd_to);

	if (close(fd_from) == -1)
		error_exit(100, "close fd");
	if (close(fd_to) == -1)
		error_exit(100, "close fd");

	return (0);
}

/**
 * open_file - opens file
 * @file: file name
 * @flags: accepts integer
 * Return: Integer;
 */

int open_file(const char *file, int flags)
{
	int fd = open(file, flags, 0664);
	if (fd == -1)
		error_exit(errno == ENOENT ? 98 : 99, file);
	return (fd);
}
