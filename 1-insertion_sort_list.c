#include "sort.h"

/**
 * insertion_sort_list - Sort linked list using insertion type of sorting
 * @list: linked list
 */
void insertion_sort_list(listint_t **list)
{
	int test = 0; /* test if sorted */
	listint_t *copyNode1, *copyNode2;
	listint_t *head = *list;

	if (!(*list))
		return;
	while (test == 0)
	{
		test = 1;
		head = *list;
		while (head)
		{
			if ((head)->next && (head)->n > (head)->next->n)
			{
				copyNode1 = (head)->next;
				copyNode2 = (head)->prev;

				if ((head)->next->next)
					(head)->next->next->prev = (head);
				(head)->next = (head)->next->next;

				if (copyNode1 != NULL)
					(copyNode1)->next = (head);
				(head)->prev = (copyNode1);

				if (copyNode1 != NULL)
					(copyNode1)->prev = copyNode2;
				if (copyNode2 != NULL)
					(copyNode2)->next = copyNode1;
				else /* if copyNode2 = NULL means copyNode1 is the new head*/
					*list = copyNode1;

				test = 0;
				print_list(*list);
			}
			head = (head)->next;
			if (test == 0)
				break;
		}
	}
}
