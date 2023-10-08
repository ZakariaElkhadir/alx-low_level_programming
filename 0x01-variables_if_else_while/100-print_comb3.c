#include <stdio.h>
/**
 * main - main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, jv;

	i = 40;
	jv = 49;

	while (i < 58)
	{
		putchar(i);
		putchar(jv);
		if ((i == 56) && (jv == 57))
		{
			putchar('\n');
			i++;
			jv++;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
		if (jv < 57)
		{
			jv++;
		}
		else
		{
			i++;
			jv = i + 1;
		}
	}
	return (0);
}
