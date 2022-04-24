#include "main.h"

/**
 * _isalpha - checks for an alphabetic character.
 * @c : character to check the case.
 * Return:0 or 1
 */
int _isalpha(int c)
{
	return ((c > 96 && c < 123) || (c > 64 && c < 91));
}
