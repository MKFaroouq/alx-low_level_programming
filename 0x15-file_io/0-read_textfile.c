#include "main.h"
#include <stdio.h>
/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: filename
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t READ_numbers;
	ssize_t WRITE_numbers;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd != -1)
	{
		buffer = malloc(letters);
		if (!buffer)
			return (0);
		READ_numbers = read(fd, buffer, letters);
		WRITE_numbers = write(STDOUT_FILENO, buffer, READ_numbers);
		close(fd);
		free(buffer);
		return (WRITE_numbers);
	}
	return (0);
}
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, _read, _write;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 600);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	_read = read(fd, buffer, letters);
	if (_read == -1)
	{
		free(buffer);
		return (0);
	}

	_write = write(STDOUT_FILENO, buffer, _read);
	if (_write == -1 || _write != _read)
	{
		return (0);
	}

	free(buffer);
	close(fd);
	return (_write);
}
