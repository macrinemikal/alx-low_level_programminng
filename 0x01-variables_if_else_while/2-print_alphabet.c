#include<stdio.h>

/**
 * main - prints alphabet in lowercase follwed by a new line.
 *
 * Return: Always zero.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
