#include "main.h"

/**
  * read_textfile - A function that reads a text file and prints it to
  * the POSIX standard output
  *
  * @letters: number of letters it should read and print
  * @filename:
  *
  * Return: returns the actual number of letters it could
  * read and print
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buff[1024];
	ssize_t total_count = 0, bytes_print, bytes_read = 0, bytes_w;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	if (bytes_read < (size_t)letters)
		bytes_print = bytes_read;

	else
		bytes_print = letters;

	bytes_w = write(STDOUT_FILENO, buff, bytes_print);

	if (bytes_w != bytes_print)
	{
		close(fd);
		return (0);
	}

	total_count += bytes_print;
	letters -= bytes_print;

	close(fd);
	return (total_count);
}
