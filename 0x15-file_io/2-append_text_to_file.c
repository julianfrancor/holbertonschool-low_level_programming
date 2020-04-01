#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, file_position;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);


	if (!text_content)
	{
		if (fd != -1)
		{
			return (1);
		}
		else
		{
		return (-1);
		}
	}
	else
	{
		/*here I don't have to read because they gave me the*/
		/*text_content already created with a string inside*/
		/*so I don't have to allocate new memory*/
		file_position = write(fd, text_content, strlen(text_content));
	}

	if (file_position == -1)
		return (-1);

	close(fd);
	return (1);
}
