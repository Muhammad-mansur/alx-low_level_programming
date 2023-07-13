#include<stdio.h>

/**
  * main - A program that prints size of various datatypes on a computer
  *
  * Return: 0 (Success)
  */

int main(void)
{
	printf("The size of int datatype is: %lu bytes", sizeof(int));
	printf("The size of char datatype is: %lu bytes", sizeof(char));
	printf("The size of double datatype is: %lu bytes", sizeof(double));
	printf("The size of float datatype is: %lu bytes", sizeof(float));
	printf("The size of long datatype is: %lu bytes", sizeof(float));
	printf("The size of long long datatype is: %lu bytes", sizeof(long long));
	return (0);
}
