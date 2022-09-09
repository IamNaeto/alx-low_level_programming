#include <stdio.h>

/**
 * main - Entry point
 * author: IamNaeto
 * Return: Always 0 (Success)
 */
int main (void)
{
	char naeto;

	for (naeto = 'a' ; naeto <= 'z' ; naeto++)
	{
		if (naeto != 'q' && naeto != 'e')
			putchar(naeto);
	}
	putchar('\n');
	return (0);
}
