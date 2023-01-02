#include "sort.h"

void insertion_sort_list(listint_t **list)
{
    int test = 0; /* test if sorted */
    listint_t *copyNode;
    listint_t *head = *list;

    while (test == 0)
    {
        test = 1;
        head = *list;
        while (head)
        {
            if ((head)->next && (head)->n > (head)->next->n)
            {
                (head)->prev->next = (head)->next;

                if ((head)->next)
                    (head)->next->prev = (head)->prev;

                (head)->prev = (head)->next;
                copyNode = (head)->prev->next;
                (head)->prev->next = (head);
                (head)->next = copyNode;
                (head)->next->prev = (head);
                test = 0;
            }
            if ((head)->prev)
                print_list(*list);
            head = (head)->next;
            if (test == 0)
                break;
        }
    }
}