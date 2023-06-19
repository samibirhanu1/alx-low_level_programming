#include <stdio.h>
#include <stdlib.h>
/**
 * main - 4-print_alphabt.c
 *
 * Return: 0
 */
int main(void)
{
	char al_qp;

	for (al_qp = 'a'; al_qp <= 'z'; al_qp++)
	{
		if (al_qp == 'q' || al_qp == 'e')
		{
			continue;
		}
		putchar(al_qp);
	}
	putchar('\n');
	return (0);
}
