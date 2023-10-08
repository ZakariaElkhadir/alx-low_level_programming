#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, jv;

	for (i = 48; i <= 56; i++)
	{
		for (jv = 49; jv <= 57; jv++)
		{
			if (jv > i)
			{
				putchar(i);
				putchar(jv);
				if (i != 56 || jv != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
