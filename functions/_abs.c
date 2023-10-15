#include <stdio.h>
/**
 * _abs - returns the absolute value of a number
 * @n: the number to return it's absolute value
 * Return: the absolute value of the given argument
*/
int _abs(int n)
{
	if (n < 0)
	{
		n = -1 * (n); /** returns the absolute value (positive value)*/
	}
	return (n);
}

/**
 * main - entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int num1 = 2000;
	int num2 = -3000;

	printf("n: first value: %d\n", num1);
	printf("second value: %d\n", num2);

	printf("absolute function on second value: %d\n", _abs(num2));
	printf("Absolute function on first value: %d\n", num1);

	return (0);
}