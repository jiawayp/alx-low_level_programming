#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - read a text file and print it to the POSIX std output
 * @filename: file to print
 * @letters: char of letter
 * Return: number of chars printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, er, rd;
	char *buffer;

	fd = er = rd = 0;
	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
		return (0);
	rd = read(fd, buffer, letters);
	if (rd < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[letters] = '\0';
	er = write(STDOUT_FILENO, buffer, rd);
	if (er < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (rd);
}
