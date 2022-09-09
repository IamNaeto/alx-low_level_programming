#include <stdio.h>
/**
 * main - Entery point
 * author: IamNaeto
 * Return: Always 0 (Success)
 */
int main(void)
{
	int naeto;
	char charlie;

	for (naeto = 48 ; naeto < 58 ; naeto++)
		putchar(naeto);
	for (charlie = 'a' ; charlie <= 'f' ; charlie++)
		putchar(charlie);
	putchar('\n');
	return (0);
}
