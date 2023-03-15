#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: argument count no. of command
 * @argv: arguments of array that contains the program
 *
 * Return: 0 - success
 */

int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
