#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char cha = 'a';

	while (cha <= 'z')
	{
		putchar(cha);
		++cha;
	}
	putchar('\n');

	return (0);
}
