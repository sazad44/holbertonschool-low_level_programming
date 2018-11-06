#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: the name of the file to be written
 * @letters: the number of letters to read and print
 * Return: the number of letters it read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, numwrit;
	char *buf = malloc(sizeof(char) * (letters + 1));

	if (filename == NULL || letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	numwrit = read(fd, buf, letters);
	if (numwrit == -1)
		return (0);
	buf[letters] = '\0';
	numwrit = write(1, buf, numwrit);
	if (numwrit == -1)
		return (0);
	close(fd);
	return (numwrit);
}
