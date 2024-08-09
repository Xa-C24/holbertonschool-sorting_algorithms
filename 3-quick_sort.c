		#include "sort.h"
		/**
		 * quick_sort - sorts an array using quick sort algorithm.
		 * @array: the array to be sorted.
		 * @size: the number of on the array.
		 *
		 */
		void quick_sort(int *array, size_t size)
	{
		size_t i, j;

		if (size <= 1)
		{
			return;
		}

		int pivot = array[size - 1];			/* define pivot last element in the table.*/

			i = 0;

		for (j = 0; j < size - 1; j++)
		/* loop to go through all the elements in the table. Exect the last (pivot)*/
		{
			if (array[j] < pivot)
			/*  Checks whether the current element is smaller than the pivot. */
		{
				if (i != j)
				{
					int temp = array[i];		/*  Stocke l'élément à l'index i.*/

					array[i] = array[j];		/* Replaces the element at index 'i' by 'j'*/
					array[j] = temp;			/* Resets the element stored in 'temp' */
					print_array(array, size);	/* Display the table after the exchange */
				}
					i++;
			}
		}

		int temp = array[i];

		array[i] = array[size - 1];
		array[size - 1] = temp;
		print_array(array, size);

		quick_sort(array, i);
		quick_sort(array + i + 1, size - i - 1);
	}
