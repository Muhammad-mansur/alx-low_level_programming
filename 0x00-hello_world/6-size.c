#include<stdio.h>

/**
  * main - A program that prints size of various datatypes on a computer
  *
  * Return: 0 (Success)
  */

int main(void)
{
	printf("Size of an int: %lu byte(s)", sizeof(int));
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("Size of a double: %lu byte(s)", sizeof(double));
	printf("Size of a float: %lu byte(s)", sizeof(float));
	printf("Size of a long int: %lu byte(s)", sizeof(long));
	printf("Size of a long long int: %lu byte(s)", sizeof(long long));
	return (0);
}
