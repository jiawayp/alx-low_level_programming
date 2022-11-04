#include "main.h"

/**
 * create_file - a function that create a file
 * @filename: file to create
 * @text_content: char to write file in
 * Return: 1 if success or -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int ii;

	ii = 0;
	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	fd = open(filename, O_CREAT | O_EXCL | O_WRONLY, 0600);
	if (fd < 0)
	{
		if (errno == EEXIST)
		{
			fd = open(filename, O_WRONLY | O_TRUNC);
			if (fd == -1)
				return (-1);
		}
		else
			return (-1);
	}
	while (text_content[ii] != '\0')
	{
		if (write(fd, &text_content[ii], 1) == -1)
			return (-1);
		ii++;
	}
	close(fd);
	return (1);
}


