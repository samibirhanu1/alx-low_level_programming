#include "main.h"
/**
 * main - write alphabet in lower_case only
 * using _putchar 2 times
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i < 'z'; i++;)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
