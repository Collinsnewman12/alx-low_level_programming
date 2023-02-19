#include <stdio.h>
/**
* main - A program that prints the size of of various computer types
* Return: 0 (Success)
*/
int main(void)
{
	char b;
	int c;
	long int d;
	long long int e;
	float f;

printf("Size of a char: %lu 1 byte(s)\n", (unsigned long)sizeof(b));
printf("Size of an int: %lu 1 byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long int: %lu 1 byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a long long int: %lu 1 byte(s)\n", (unsigned long)sizeof(e));
printf("Size of a float: %lu 1 byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
