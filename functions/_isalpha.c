#include <stdio.h>
/**
 * _isalpha - checks if a character is alphabet
 * @c: the character to check
 * Return: 1 if true, 0 if false
*/
int _isalpha(char c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);/*returns 0 if false*/
}

/**
 * main - entry point, tests islower function
 * Returns: 0 for success
*/
int main(void)
{
	int numb = 123;
	char alpha = 'A';
	char c = 'b';

	if (_isalpha(numb))
	{
		printf("%d is alphabet\n", numb);
	}
	else if (_isalpha(alpha))
	{
		printf("%c is alphabet\n", alpha);
	}
	
	return (0);
}