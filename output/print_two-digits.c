#include <stdio.h>
/**
 * main - entry point
 * Description: program to print possible combination of two digits
 * sample: 01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13... etc
 * The digits must be different
 * Return: 0 (success)
*/
int main(void)
{
	int i = 48, j = i + 1;

	while (i <= 57)
	{
		while (j <= 57)
		{
			
			if (i != j)
			{
				putchar(i);
				putchar(j);
			}
			if (j != 57)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		j = i + 1;
		i++;
	}
	putchar('\n');
}