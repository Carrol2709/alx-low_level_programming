#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C Program that tha skips e and q in printing alphabt
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			++ch;
		putchar(ch);
		++ch;
	}
	putchar('\n');
	return (0);
}
