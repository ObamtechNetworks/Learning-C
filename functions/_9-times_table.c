#include <stdio.h>
/**
 * times_table - prints the 9 times table starting from 0
 * Format:
 * 0,  0,  0,  0,  0,  0,  0,  0,  0,  0$
 * 0,  1,  2,  3,  4,  5,  6,  7,  8,  9$
 * 0,  2,  4,  6,  8, 10, 12, 14, 16, 18$
 * 0,  3,  6,  9, 12, 15, 18, 21, 24, 27$
 * 0,  4,  8, 12, 16, 20, 24, 28, 32, 36$
 * 0,  5, 10, 15, 20, 25, 30, 35, 40, 45$
 * 0,  6, 12, 18, 24, 30, 36, 42, 48, 54$
 * 0,  7, 14, 21, 28, 35, 42, 49, 56, 63$
 * 0,  8, 16, 24, 32, 40, 48, 56, 64, 72$
 * 0,  9, 18, 27, 36, 45, 54, 63, 72, 81$
 * Returns: nothing
*/
void times_table(void)
{
	int i, j, product;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = j * i;
			if (product <= 9)
			{
				putchar(48 + product);
			}
			else
			{
				putchar(48 + (product / 10));
				putchar(48 + (product % 10));
			}
			if (j < 9)
			{
				putchar(',');
				putchar(' ');
			if (product + 1 <= 10)
				{
					putchar(' ');
				}
			}
		}
		putchar('\n');
	}
}

int main(void)
{
	times_table();

	return (0);
}