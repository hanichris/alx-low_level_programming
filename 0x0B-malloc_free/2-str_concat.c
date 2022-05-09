#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strlen - compute the length of a string without considering
 * the null terminating character \0
 * @s : string whose length is to be computed.
 * Return: int - length of the string.
 */
int _strlen(char *s)
{
	int iter = 0;
	int size = 0;

	while (s[iter])
	{
		size++;
		iter++;
	}
	return (size);
}

/**
 * str_concat - concatenate two strings starting with string s1.
 * @s1 : first string.
 * @s2 : second string.
 * Return: NULL or pointer to concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	int iter_0 = 0;
	int iter_1 = 0;
	int iter_2 = 0;
	int size = 0;
	char *str;

	size = _strlen(s1) + _strlen(s2) + 1;
	str = malloc(sizeof(char) * size);
	if (str)
	{
		while (iter_2 < size)
		{
			if (iter_2 == size - 1)
				*(str + iter_2) = '\0';
			if (s1[iter_0])
			{
				*(str + iter_2) = s1[iter_0];
				iter_0++;
			}
			else if (s2[iter_1])
			{
				*(str + iter_2) = s2[iter_1];
				iter_1++;
			}
			iter_2++;
		}
		return (str);
	}
	return (NULL);
}
