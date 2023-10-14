#include <stdio.h>
/**
 * main - entry point
 * Description: a program that prints all possible different combinations of three digits.
 * sample: 012, 013, 014, 015, 016, 017, 018, 019, 023, 024...
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 
 * are considered the same combination of the three digits 0, 1 and 2
 * Return: 0 (success)
*/
int main(void)
{
	int i = 0, j = 0, k = 0;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
				}
				if (i != 55 || j != 56 || k != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(20);
}