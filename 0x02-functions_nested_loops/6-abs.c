#include "main.h"

/**
 * _abs - return the absolute value of a num
 * @num : num to find absolute value of.
 * Return: absolute value of the num.
 */
int _abs(int num)
{
	int mask = num >> (sizeof(num) * 8 - 1);

	return ((mask ^ num) - mask);
}
