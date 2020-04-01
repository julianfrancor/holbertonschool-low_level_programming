#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * create_file -  function that creates a file.
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, filename is NULL or
 * if text_content is NULL create an empty file)
 */
int create_file(const char *filename, char *text_content)
{
	int fd = -1, file_position = 0, lenght = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/*finding the lenght of the string*/
	while (text_content[lenght])
	{
		lenght++;
	}

	if (!text_content)
	{
		/*if text_content is NULL create an empty file*/
		file_position = write(fd, text_content, 0);
		close(fd);

	}
	else
	{
		/*here I don't have to read because they gave me the*/
		/*text_content already created with a string inside*/
		/*so I don't have to allocate new memory*/
		file_position = write(fd, text_content, lenght);
		close(fd);
	}

	if (file_position == -1)
		return (-1);

	return (1);
}
