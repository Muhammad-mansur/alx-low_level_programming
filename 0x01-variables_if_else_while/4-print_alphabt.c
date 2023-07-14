#include<stdio.h>

/**
  * main - my entry point
  *
  * Description: A program that prints the alphabet
  * in lower case without letters "q" and "e".
  *
  * Return: 0 (Success)
  */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++) /* to lower case */
	{
		if (alpha != 'q' && alpha != 'e') /* removing q and e */
		{
			putchar(alpha);
		}

	}

	putchar('\n'); /* new line */
}
