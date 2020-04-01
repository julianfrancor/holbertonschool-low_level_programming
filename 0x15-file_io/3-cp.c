#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program that copies the content of a file to another file.
 * @argc: number of parameters
 * @argv: array of strings
 * Return: 0 for success.
 */
int main(int argc, char *argv[])
{
	int fd1, fd2;
	ssize_t f_position, f_write, f_close;
	char temp_buffer[1024];

	if (argc != 3)
	{ dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]),
		exit(97); }
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
		exit(98); }
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't write %s\n", argv[2]),
		exit(99); }
	f_position = 1024;
	do {
		f_position = read(fd1, temp_buffer, 1024);
		if (f_position == -1)
		{ dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98); }
		f_write = write(fd2, temp_buffer, f_position);
		if (f_write == -1)
		{ dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]),
			exit(99); }
	} while (f_position == 1024);
	f_close = close(fd1);
	if (f_close == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1),
		exit(100); }
	f_close = close(fd2);
	if (f_close == -1)
	{ dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1),
		exit(100); }
	return (0);
}
