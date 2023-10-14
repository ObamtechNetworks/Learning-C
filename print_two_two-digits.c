#include <stdio.h>
/**
 * main - entry point
 * Description: a program that prints all possible combinations of two two-digit numbers.
 * sample: 00 01, 00 02, 00 03, 00 04, 00 05, 00 06, 00 07, 00 08, 00 09, 00 10, 00 11 ...
 * The three digits must be different
 * 00 01 and 01 00 are considered as the same combination of the numbers 0 and 1 
 * All numbers should be printed with two digits. 1 should be printed as 01
 * The combination of numbers must be separated by comma, followed by a space
 * The combinations of numbers should be printed in ascending order
 * Return: 0 (success)
*/
int main(void)
{
	int i = 0, j = 0;
	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			putchar(48 + i / 10); /**gets the first value*/
			putchar(48 + i % 10); /* gets the last value*/
			putchar(' ');
			putchar(48 + j / 10);
			putchar(48 + j % 10);
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
	}

	}
	return (0);
}