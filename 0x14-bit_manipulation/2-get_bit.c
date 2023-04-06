#include "main.h"
/**
 * get_bit - finds value of a bit at a given index
 * @n: is the number input
 * @index: index
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return -1;
	return ((n >> index) & 1);
}
