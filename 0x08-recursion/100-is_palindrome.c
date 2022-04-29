#include "main.h"

/**
 * _strlen_recursion -return the length of a string.
 * @s : pointer to character array.
 * Return: int - string length.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * checker -return 0 or 1 checking if str is a palindrome..
 * @s : pointer to character array.
 * @iter : int - start index.
 * @last_index : int - end index
 * Return: int - 0 or 1.
 */
int checker(char *s, int iter,  int last_index)
{
	if (*(s + iter) != *(s + last_index))
		return (0);
	else if (last_index <= iter)
		return (1);
	return (checker(s, iter + 1, last_index - 1));
}

/**
 * is_palindrome - driving code.
 * @s : pointer to character array.
 * Return: int - 0 or 1 checking validity of palindrome.
 */
int is_palindrome(char *s)
{
	int iter = 0;
	int length = _strlen_recursion(s);

	if (!length)
		return (1);

	return (checker(s, iter, length - 1));
}
