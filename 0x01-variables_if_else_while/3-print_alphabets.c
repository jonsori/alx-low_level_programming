#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch1 = 'a';
	char ch2 = 'A';

	/*prints a-z*/
	while (ch1 <= 'z')
	{
		putchar(ch1);
		++ch1;
	}

	/*print A-Z*/
	while (ch2 <= 'Z')
	{
		putchar(ch2);
		++ch2;
	}
	putchar('\n');

	return (0);
}
