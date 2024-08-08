#include "sort.h"
/**
 * insertion_sort_list - Declares the function for sorting the list.
 * @list: Double pointer to the head of the list.
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *next, *temporary;

	/* Checks whether the list is empty or contains a single element*/
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	/* Starts from the second node in the list*/
	current = (*list)->next;

		while (current != NULL)
	{
		next = current->next;		/*Stores the following node*/

		/*Loop to insert the current node at the correct position*/
		while (current->prev != NULL && current->n < current->prev->n)
		{
			temporary = current->prev;

			/*Exchanges current and temp nodes*/
			temporary->next = current->next;
			if (current->next != NULL)
			current->next->prev = temporary;
			current->prev = temporary->prev;
			current->next = temporary;
			if (temporary->prev != NULL)
			temporary->prev->next = current;
			else
			*list = current;
			temporary->prev = current;
			/* Print list after each swap */
			print_list(*list);
		}
		current = next;			/*Goes to the next node*/
	}
}
