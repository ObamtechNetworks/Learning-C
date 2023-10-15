#include <stdio.h>
/**
 * _islower - checks if a character is lowercase
 * @c: the character to check for
 * Return: 1 if true, 0 if false
*/
int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
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
	char character = 'C';
	char character2 = 'c';

	if (_islower(character))
	{
		printf("This character is lowercase: %c\n", character);
	}
	else if (_islower(character2))
	{
		printf("This character is lowercase: %c\n", character2);
	}
	else
	{
		printf("None of them are lowercase: %c %c\n", character, character2);
	}
	return (0);
}