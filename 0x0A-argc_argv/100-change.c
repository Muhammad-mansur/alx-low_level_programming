#include <stdio.h>
#include <stdlib.h>

/**
  * main - entry point
  * @argc: argument count
  * @argv: argument vector
  * Return: 0 if the number is negative
  */

int main(int argc, char *argv[])
{
	int cents, coin_no, a, cnt = 0, coin_v[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
	}

	coin_no = sizeof(coin_v) / sizeof(coin_v[0]);

	for (a = 0; a < coin_no; a++)
	{
		while (cents >= coin_v[a])
		{
			cents = cents - coin_v[a];
			cnt++;
		}
	}

	printf("%d\n", cnt);

	return (0);
}
