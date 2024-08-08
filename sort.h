#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>



/**
* struct listint_s - Doubly linked list node
* @n:Integer stored in the node
* @prev: Pointer to the previous element of the list
* @next: Pointer to the next element of the list
*/
	typedef struct listint_s
	{
		int n;
		struct listint_s *prev;
		struct listint_s *next;
	} listint_t;

		void bubble_sort(int *array, size_t size);
		void insertion_sort_list(listint_t **list);
		/* Declaration of the function for sorting the list.*/
		void selection_sort(int *array, size_t size);
		void quick_sort(int *array, size_t size);

		void print_list(const listint_t *list);
<<<<<<< HEAD
		void print_array(const int *array, size_t size);
=======
		/* Declaration of the function for printing the list*/
>>>>>>> c9aec365490d7610fc34b4a6a3bf70c1394af0fa

#endif
