#include "sort.h"

/**
 * selection_sort - that sorts an array of integers in ascending order
 * @array: array of integers
 * @size: size of array
 *
 * Return: (0).
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, k;
	size_t index;
	int tmp;

	for (i = 0; i < size - 1; i++)
	{
		index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[index])
			{
				index = j;
			}
		}
		if (index != i)
		{
			tmp = array[i];
			array[i] = array[index];
			array[index] = tmp;

			for (k = 0; k < size; k++)
			{
				if (k > 0)
				{
					printf(", ");
				}
				printf("%d", array[k]);
			}
			printf("\n");
		}
	}
}
