#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <stdlib.h>

/**
 * copy_file - copies file
 * @fd_from: target file
 * @fd_to: destination file
 * Return: void
 */

void copy_file(int fd_from, int fd_to)
{
	char buf[BUFSIZE];
	ssize_t read_from, write_to;

	while ((read_from = read(fd_from, buf, BUFSIZE)) > 0)
	{
		write_to = write(fd_to, buf, read_from);
		if (write_to == -1 || write_to != read_from)
			error_exit(99, "write");
	}
}

/**
 * error_exit - exits with error code
 * @code: error code
 * @file: file name
 * Return: void
 */

void error_exit(int code, const char *file)
{
	char msg[ERROR_MSG_LEN];

	switch (code)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file to\n");
			break;
		case 98:
			snprintf(msg, ERROR_MSG_LEN, "Can't read from file %s", file);
			break;
		case 99:
			snprintf(msg, ERROR_MSG_LEN, "Can't write to %s", file);
			break;
		case 100:
			snprintf(msg, ERROR_MSG_LEN, "Can't close fd");
			break;
	}

	dprintf(STDERR_FILENO, "Error: %s\n", msg);
	exit(code);
}
