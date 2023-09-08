#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char characters;
	int integers;
	long longcharacters;
	long long really_long;
	float floating_point;

	printf("Size of a char: %lu byte(s)\n", sizeof(characters));
	printf("Size of an int: %lu byte(s)\n", sizeof(integers));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longcharacters));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(really_long));
	printf("Size of a float: %lu byte(s)\n", sizeof(floating_point));

	return (0);
}
