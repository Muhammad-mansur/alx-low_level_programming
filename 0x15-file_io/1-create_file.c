#include "main.h"

/**
  * create_file - A function that creates a file
  * @filename: name of the file to create
  * @text_content: NULL terminated string to write to the file
  * Return: 1 on success or -1 on failure
  */

int create_file(const char *filename, char *text_content)
{
	int fd, byte_w;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		byte_w = write(fd, text_content, strlen(text_content));
		if (byte_w == -1)
		{
			return (-1);
			close(fd);
		}
	}

	close(fd);
	return (1);
}
