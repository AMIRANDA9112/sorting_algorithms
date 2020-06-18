#include "sort.h"
/**
 * bubble_sort - bubble_sort
 * @array: array to sort
 * @size: size of output
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *before;
	listint_t *after;
	listint_t *buffer;
	listint_t *sort;

	if (!list && !*list)
	{
		return;
	}
	else
	{
		buffer = *list;

		while (buffer)
        {
		if(!buffer->prev)
		{
		while (buffer->next) {
            after = buffer->next;
            before = buffer->prev;
            if (buffer->n > after->n) {
                if (buffer->prev == NULL && after->next == NULL) {
                    sort = buffer;
                    buffer = after;
                    buffer->prev = NULL;
                    buffer->next = sort;
                    sort->prev = buffer;
                    sort->next = NULL;
                    *list = buffer;
                } else if (buffer->prev == NULL) {
                    sort = buffer;
                    buffer = after;
                    buffer->prev = NULL;
                    buffer->next = sort;
                    sort->prev = buffer;
                    sort->next = before->next;
                    *list = buffer;
                } else if (after->next == NULL) {
                    sort = buffer;
                    buffer = after;
                    buffer->prev = before;
                    buffer->next = sort;
                    sort->prev = buffer;
                    sort->next = NULL;
                    *list = buffer;
                } else {
                    sort = buffer;
                    buffer = after;
                    buffer->prev = before;
                    buffer->next = sort;
                    sort->prev = buffer;
                    sort->next = before->next;
                    *list = buffer;
                }
                print_list(sort);
            } else {
                buffer = buffer->next;
            }
            }
		}
		else
        {
		   buffer = buffer->prev;
        }
        }
	}
}
