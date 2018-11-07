#include "holberton.h"

/**
 * main - Entry point
 * @argc: the number of arguments provided to the program
 * @argv: a pointer to an array of pointers that point to the arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, cl1, cl2, rd;
	char *buf;

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = malloc(sizeof(char) * 1024);
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 < 0)
	{
		printf("Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 < 0)
	{
		printf("Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	do
	{
		rd = read(fd1, buf, 1024);
		if (rd < 0)
		{
			close(fd1);
			close(fd2);
			free(buf);
			return (-1);
		}
		dprintf(fd2, "%s", buf);
	} while (rd == 1024);
	free(buf);
	cl1 = close(fd1);
	if (cl1 < 0)
	{
		printf("Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	cl2 = close(fd2);
	if (cl2 < 0)
	{
		printf("Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (1);
}
