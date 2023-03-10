#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints the minimum number of coins to make change for an
 * amount of money
 * @argc: takes in an integer
 * @argv: takes in a string
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, temp, rem, numOfCoins = 0, num;
	int arr[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
	}
	else if (atoi(argv[1]) >= 0)
	{

		rem = atoi(argv[1]);

		while (rem != 0)
		{
			for (i = 0; i < 5; i++)
			{
				if (rem >= arr[i])
				{
					temp = arr[i];
					break;
				}
			}
			num = rem / temp;
			rem = rem % temp;
			numOfCoins += num;
		}
		printf("%d\n", numOfCoins);
	}
	return (0);
}
