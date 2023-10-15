#include <stdio.h>
/**
 * print_times_table - prints n times table
 * If n is greater than 15 or less than 0 
 * the function should not print anything
 * @n: the value to print it's equivalent times table
 * Return: nothing
*/
void print_times_table(int n)
{
	int i = 0, j = 0, product;
	if (n > 15 || n < 0)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		putchar(48); /** leading zero*/
		for (j = 0; j <= n; j++)
		{
			product = j * i;
			
			if (j <= n)
			{
				putchar(',');
				putchar(' ');
			}
			if (product <= 9)
			{
				putchar(' ');
			}
			if (product <= 99)
			{
				putchar(' ');
			}

			if (product >= 100)
			{
				putchar('0' + product / 100);
				product %= 100;
				putchar('0' + product / 10);
				product %= 10;
			}

			if (product >= 10)
			{
				putchar('0' + product / 10);
				product %= 10;
			}
			
			if (product <= 10)
				putchar('0' + product);
			
			
		}
		putchar('\n');
	}
}

int main(void)
{
	print_times_table(3);
    putchar('\n');
    print_times_table(5);
    putchar('\n');
    print_times_table(98);
    putchar('\n');
    print_times_table(12); 
}