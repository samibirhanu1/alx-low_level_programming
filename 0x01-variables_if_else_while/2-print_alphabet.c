#include <stdio.h>
#include <stdlib.h>
/**
 * main - 2-print_alphabet.c
 * Return: 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
