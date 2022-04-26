#include "main.h"
/**
 * _strlen - return length of a string
 * @s : pointer to the character array
 * Return: String length
 */
int _strlen(char *s)
{
	int iter = 0, len = 0;

	while (s[iter] != '\0')
	{
		len++;
		iter++;
	}
	return (len);
}
