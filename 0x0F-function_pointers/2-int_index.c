/**
 * int_index - searches for an integer
 * @array: a pointer to the first integer of an array
 * @size: takes in the size of the array
 * @cmp: a pointer to a function
 * Return: returns the index of the first element
 *         for which the cmp function does not return 0
 *         If no element matches, return -1
 *         If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index, foundMatch = 0;

	if (size <= 0)
		return (-1);
	if (array && size > 0 && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (((*cmp)(*(array + i))) == 1)
			{
				foundMatch = 1;
				index = i;
				break;
			}
		}
	}
	if (foundMatch != 1)
		return (-1);
	else
		return (index);
}
