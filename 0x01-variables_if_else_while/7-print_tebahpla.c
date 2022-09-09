#include <stdio.h>

/**
 * main - Entry point
 * author: naeto
 * Return: Always 0 (Success)
 */
int main(void)
{
	char naeto;

	for (naeto = 'z' ; naeto >= 'a' ; naeto--)
		putchar(naeto);
	putchar('\n');
	return (0);
}
