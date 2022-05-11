#include <stdio.h>
#include <stdlib.h>
/**
 * compute_min_coin_num - compute the minimum number of coins to be used
 * for change.
 * @cents : int
 * Return: 0 or 1.
 */
int __attribute__((unused))compute_min_coin_num(int cents)
{
	if (cents <= 0)
		return (0);
	else if (cents >= 25)
		return (1 + compute_min_coin_num(cents - 25));
	else if (cents >= 10)
		return (1 + compute_min_coin_num(cents - 10));
	else if (cents >= 5)
		return (1 + compute_min_coin_num(cents - 5));
	else if (cents >= 2)
		return (1 + compute_min_coin_num(cents - 2));
	else if (cents % 1 == 0)
		return (1 + compute_min_coin_num(cents - 1));
}

/**
 * main - check code.
 * @argc : int - argument count.
 * @argv : char * - argument vector.
 * Return: 0 or 1.
 */
int main(int argc, char *argv[])
{
	int cents;
	int coin = 0;
	int min_coin_num = 0;
	int viable_coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
		printf("%d\n", 0);
	else
	{
		while (cents > 0 && coin < 5)
		{
			if (cents >= viable_coins[coin])
			{
				cents -= viable_coins[coin];
				min_coin_num++;
			}
			else
				coin++;
		}
		printf("%d\n", min_coin_num);
	}

	return (0);
}
