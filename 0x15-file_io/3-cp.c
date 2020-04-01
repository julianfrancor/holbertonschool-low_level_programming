#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - function that copyes a file to another one
 * @argc: number of parameters
 * @argv: array of strings
 * Return: 0 for success.
 */
int main(int argc, char *argv[])
{
	int fd1, fd2;
	ssize_t f_position, f_write, f_close;
	char temp_buffer[1024];

/*if the number of argument is not the correct one, exit with code 97
and print Usage: cp file_from file_to, followed by a new line, on the
POSIX standard error*/
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	fd1 = open(argv[1], O_RDONLY);
/*if file_from does not exist, or if you can not read it, exit with code 98
and print Error: Can't read from file NAME_OF_THE_FILE, followed by a new
line, on the POSIX standard error*/
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
/*if you can not create or if write to file_to fails, exit with code 99 and
print Error: Cannot write to NAME_OF_THE_FILE, followed by a new line, on
the POSIX standard error*/
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write %s\n", argv[2]);
		exit(99);
	}
	f_position = 1024;
	do {
		f_position = read(fd1, temp_buffer, 1024);
		/*if file_from does not exist, or if you can not read it, exit with code 98
		and print Error: Can't read from file NAME_OF_THE_FILE, followed by a new
		line, on the POSIX standard error*/
		if (f_position == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		f_write = write(fd2, temp_buffer, f_position);
		/*if you can not create or if write to file_to fails, exit with code 99 and
		print Error: Cannot write to NAME_OF_THE_FILE, followed by a new line, on
		the POSIX standard error*/
		if (f_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
			exit(99);
		}
	} while (f_position == 1024);
	f_close = close(fd1);
	/*if you can not close a file descriptor , exit with code 100 and print Error:
	Can't close fd FD_VALUE, followed by a new line, on the POSIX standard error*/
	if (f_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	f_close = close(fd2);
	/*if you can not close a file descriptor , exit with code 100 and print Error:
	Can't close fd FD_VALUE, followed by a new line, on the POSIX standard error*/
	if (f_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	return (0);
}
