#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: pointer to the file name
 * @text_content: a pointer to the content to be inserted into the file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
		if (fd < 0)
			return (-1);
		close(fd);
		return (1);
	}
	while (text_content[len++])
		;
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd < 0)
		return (-1);
	wr = write(fd, text_content, len);
	if (wr < 0)
		return (-1);
	close(fd);
	return (1);
}
