#include<stdio.h>

/**
  * main - A program that prints size of various datatypes on a computer
  *
  * Return: 0 (Success)
  */

int main(void)
{
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of a double: %lu byte(s)\n", sizeof(double));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long));
	return (0);
}
