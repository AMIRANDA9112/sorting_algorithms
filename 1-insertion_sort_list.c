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

		while (buffer->next)
        {

		while (buffer->prev) {
            after = buffer->next;
            before = buffer->prev;

            if (buffer->n < before->n) {
                if (before->prev == NULL && buffer->next == NULL) {
                    sort = buffer;
                    buffer = before;
                    buffer->prev = NULL;
                    buffer->next = sort;
                    sort->prev = buffer;
                    sort->next = NULL;
                    *list = buffer;
                }
                else if (before->prev == NULL) {
                    sort = buffer;
                    buffer = before;
                    buffer->prev = NULL;
                    buffer->next = sort;
                    sort->prev = buffer;
                    sort->next = after->prev;
                    *list = buffer;
                }
                else if (buffer->next == NULL) {
                    sort = buffer;
                    buffer = before;
                    buffer->prev = before;
                    buffer->next = sort;
                    sort->prev = buffer;
                    sort->next = NULL;
                    *list = buffer;
                }
                else {
                    sort = buffer;
                    buffer = before;
                    buffer->prev = before;
                    buffer->next = sort;
                    sort->prev = buffer;
                    sort->next = after->prev;
                    *list = buffer;
                }
                print_list(*list);
            } else {
                break;
            }
            }
		}
		   buffer = buffer->next;
	}
}
