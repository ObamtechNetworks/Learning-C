#include <stdio.h>
/** 00:00 to 23:59. **/
/**
 * jack_bauer - prints 24 hours  from 00:00 to 23:59.
 * You are allowed to use only putchar
 * Every-other stdout function is forbidden
 * Return: void
*/
void jack_bauer(void)
{
	/*00:00 to 23:59*/

	int i = 0, j = 0;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			putchar(48 + i / 10);
			putchar(48 + i % 10);
			putchar(':');
			putchar(48 + j / 10);
			putchar(48 + j % 10);
			putchar('\n');
		}
	}
	putchar('\n');
}

/**
 * main - entry point
 * Return: 0 Success
*/

int main(void)
{
	jack_bauer();

	return (0);
}