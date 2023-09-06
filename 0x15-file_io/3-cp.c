#include "main.h"

/**
  * print_error_exit - prints error and exit
  * @code: ---
  * @display: ---
  * Return: void
  */

void print_error_exit(int code, const char *display)
{
	dprintf(STDERR_FILENO, "Error: %s\n", display);
	exit(code);
}

/**
  * main - entry point
  * @argc: argument count
  * @argv: argument vector
  * Return: 0
  */

int main(int argc, char *argv[])
{
	const char *file_f, *file_t;
	int fd_s, fd_d;
	ssize_t byte_r, byte_w;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		print_error_exit(97, "Usage: cp file_from file_to");

	file_f = argv[1];
	file_t = argv[2];

	fd_s = open(file_f, O_RDONLY);
	if (fd_s == -1)
		print_error_exit(98, "Can't read from file");

	fd_d = open(file_t, O_CREAT | O_TRUNC | O_WRONLY, 0644);
	if (fd_d == -1)
		print_error_exit(99, "Can't write to file");

	while ((byte_r = read(fd_s, buffer, BUFFER_SIZE)) > 0)
	{
		byte_w = write(fd_d, buffer, byte_r);
		if (byte_w == -1)
		{
			print_error_exit(99, "Can't write to file");
		}
	}

	if (byte_r == -1)
		print_error_exit(98, "Can't read from file");

	if (close(fd_s) == -1)
		print_error_exit(100, "Can't close fd");

	if (close(fd_d) == -1)
		print_error_exit(100, "Can't close fd");

	return (0);
}
