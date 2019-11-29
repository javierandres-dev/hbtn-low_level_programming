#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 *
 * @s: string type char
 * Return: returns the lenght of a string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s++ != '\0')
		len++;

	return (len);
}

/**
 * count_words - counts the number of words in a string
 *
 * @str: The string
 * Return: The number of words or
 * any characters separated by spaces
 */
int count_words(char *str)
{
	int i;
	int count = 0, word = 0;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && word == 0)
		{
			count++;
			word = 1;
		}
		else if (str[i] == ' ')
		{
			word = 0;
		}
		i++;
	}

	return (count);
}

/**
 * free_gridc - frees a 2 dimensional grid
 * @grid: grid to free
 * @height: height of grid
 * Return: void
 */
void free_gridc(char **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
		free(grid[i++]);

	free(grid);
}


/**
 * strtow - function that splits a string into words.
 * @str: input
 * Return: a pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, j = 0, k, temp_len = 0;
	char **arr;

	if (str == NULL || _strlen(str) == 0)
		return (NULL);
	if (count_words(str) == 0)
		return (NULL);
	arr = (char **)malloc((count_words(str) + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < _strlen(str); i++)
	{
		if (str[i] != ' ')
		{
			for (k = i, temp_len = 0; str[k] != '\0' && str[k] != ' '; k++)
				temp_len++;

			arr[j] = (char *)malloc((temp_len + 1) * sizeof(char));
			if (arr[j] == NULL)
			{
				free_gridc(arr, k);
				return (NULL);
			}
			k = 0;
			while (str[i] != '\0' && str[i] != ' ')
			{
				arr[j][k] = str[i];
				i++;
				k++;
			}
			arr[j][k] = '\0';
			j++;
		}
	}
	arr[j] = NULL;
	return (arr);
}
