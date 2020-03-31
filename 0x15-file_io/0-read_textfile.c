#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * read_textfile -  function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: is a constant pointer to the name of the file to be read
 * @letters: is the number of letters it should read and print.
 * Return: returns the actual number of letters it could read and print
 * or 0 if if the file can not be opened or read, or if filename is NULL,
 * or if write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_descriptor = -1, file_position = 0;
	char *temp_buffer;
	size_t lenght_tempbuff = 0;

	/*if filename is NULL return 0*/
	if (!filename)
		return (0);
	/*Create a temporal buffer to store the data and place on it*/
	temp_buffer = malloc(sizeof(char) * letters);
	if (!temp_buffer)
		return (0);
	/*OPEN a file in the address filename in READONLY mode.*/
	file_descriptor = open(filename, O_RDONLY);
	/*if the file can not be opened or read, return 0*/
	if (file_descriptor == -1)
	{
		free(temp_buffer);
		return (0);
	}
	/*READ, where letters is the number of letters it should read and print*/
	file_position = read(file_descriptor, temp_buffer, letters);
	/*if the file can not be opened or read, return 0*/
	if (file_position == -1)
	{
		free(temp_buffer);
		return (0);
	}
	/*Finding the lenght of the new temporal buffer*/
	while (temp_buffer && temp_buffer[lenght_tempbuff])
		lenght_tempbuff++;
	/*WRITE, writes up to number of bytes (lenght_tempbuff) from the buffer*/
	/*pointed temp_buffer to the STDOUT_FILENO (standard output).*/
	file_position = write(STDOUT_FILENO, temp_buffer, lenght_tempbuff);
	free(temp_buffer);
	/*CLOSE, closes a file descriptor, so that it is not and may be reused.*/
	close(file_descriptor);
	/*if write fails or does not write the expected amount of bytes, return 0*/
	if (file_position == -1)
		return (0);
	return (file_position);
}
