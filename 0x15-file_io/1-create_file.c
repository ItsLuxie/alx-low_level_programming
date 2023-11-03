#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - append to file
 * @filename: path to file
 * @text_content: content
 * Return: chars read
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t wfile;
	int size;
	char *memo;

	if (!filename)
	{
		return (-1);
	}
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (!text_content)
	{
		close(file);
		return (1);
	}
	size = _strlen(text_content);
	memo = malloc(sizeof(char) * size);
	if (!memo)
	{
		close(file);
		return (-1);
	}
	wfile = write(file, text_content, size);
	if (wfile == -1)
	{
		close(file);
		free(memo);
		return (-1);
	}
	close(file);
	free(memo);
	return (1);
}

/**
 * _strlen - len
 * @s: is a pointer to a char
 * Return: Always 0.
 */

int _strlen(const char *s)
{
	int no = 0;

	while (*(s + no) != '\0')
	{
		no++;
	}

	return (no);
}
