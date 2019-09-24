#include "holberton.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: The character input
 * Returns:
 * Return 1 if c is a letter, lowercase or uppercase
 * Return 0 otherwise.
 */
int _isalpha(int c)
{
	char lowercase;
	char uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if (lowercase == c)
		{
			return (1);
		} else
		{
			for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
			{
				if (uppercase == c)
				{
					return (1);
				}
			}
		}
	}
	return (0);
}
