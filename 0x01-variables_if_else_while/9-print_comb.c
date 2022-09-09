#include <stdio.h>
/**
 * main - Entry point
 * author: IamNaeto
 * Return: Always 0 (Success)
 */
int main(void)
{
	int naeto;

	for (naeto = 48 ; naeto < 58 ; naeto++)
	{
		putchar(naeto);
		if (naeto ! = 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
