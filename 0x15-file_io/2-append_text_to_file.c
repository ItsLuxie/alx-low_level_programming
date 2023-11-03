#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
/**
 * append_text_to_file - apends text to file
 * @filename: path to file
 * @text_content: content
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t wfile;
	int size;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (!text_content)
	{
		close(file);
		return (1);
	}

	size = _strlen(text_content);
	wfile = write(file, text_content, size);

	if (wfile == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}

/**
 * _strlen - len
 *
 * @s: is a pointer to a char
 *
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
