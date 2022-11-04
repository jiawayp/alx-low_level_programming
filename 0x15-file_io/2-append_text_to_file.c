#include "main.h"

/**
 * append_text_to_file - a function that append text to a file
 * @filename: file to create
 * @text_content: char to write file in
 * Return: 1 if success or -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int ii;

	ii = 0;
	if (!filename)
		return (-1);
	if (!text_content)
		return (1);
	fd = open(filename, O_APPEND | O_RDWR);
	if (fd == -1)
		return (-1);
	while (text_content[ii] != '\0')
	{
		if (write(fd, &text_content[ii], 1) == -1)
			return (-1);
		ii++;
	}
	close(fd);
	return (1);
}


