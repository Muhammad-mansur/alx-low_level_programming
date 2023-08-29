#include "function_pointers.h"

/**
  * main - entry poiint
  * @argc: argument count
  * @argv: argument vector
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int a;
	unsigned char *main_ptr;
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	main_ptr = (unsigned char *)main;

	for (a = 0; a < bytes; a++)
	{
		printf("%02x", main_ptr[a]);
		if (a < bytes - 1)
		{
			printf(" ");
		}
	}

	printf("\n");

	return (0);
}
