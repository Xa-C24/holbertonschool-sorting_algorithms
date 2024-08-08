#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * @array: pointers to integers array
 * @size: size of array
 *
 * Return (0).
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, b, o;
	int tmp;

	for (i = 0; i < size - 1; i++)
	{
		for (b = 0; b < size - i - 1; b++)
		{
			if (array[b] > array[b + 1])
			{
				tmp = array[b];
				array[b] = array[b + 1];
				array[b + 1] = tmp;

				for (o = 0; o < size; o++)
				{
					if (o > 0)
					{
						printf(", ");
					}
					printf("%d", array[o]);
				}
				printf("\n");
			}
		}
	}
}
