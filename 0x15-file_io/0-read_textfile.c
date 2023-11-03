#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - reads and prints from a file
 * @filename: path to file
 * @letters: chars to read
 * Return: chars read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t bytes, value;

	if (!filename)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		close(file);
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(file);
		return (0);
	}

	bytes = read(file, buffer, letters);

	if (bytes == -1)
	{
		close(file);
		free(buffer);
		return (0);
	}

	value = write(STDOUT_FILENO, buffer, bytes);

	if (value == -1)
	{
		close(file);
		free(buffer);
		return (0);
	}
	close(file);
	return (bytes);
}
