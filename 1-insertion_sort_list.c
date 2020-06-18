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

        for (after = buffer->next, before = buffer->prev; buffer->next != NULL; buffer = buffer->next)
            {
                if (buffer->n > after->n)
                {
                    if (before == NULL && after->next == NULL)
                    {
                        sort = buffer;
                        buffer = after;
                        buffer->prev = NULL;
                        buffer->next = sort;
                        sort->prev = buffer;
                        sort->next = NULL;
                        *list = sort;
                    }

                    else if (before == NULL)
                    {
                        sort = buffer;
                        buffer = after;
                        buffer->prev = NULL;
                        buffer->next = sort;
                        sort->prev = buffer;
                        sort->next = before->next;
                        *list = sort;
                    }
                    else if (after->next == NULL)
                    {
                        sort = buffer;
                        buffer = after;
                        buffer->prev = before;
                        buffer->next = sort;
                        sort->prev = buffer;
                        sort->next = NULL;
                        *list = sort;
                    }
                    else
                    {
                        sort = buffer;
                        buffer = after;
                        buffer->prev = before;
                        buffer->next = sort;
                        sort->prev = buffer;
                        sort->next = before->next;
                        *list = sort;
                    }
                    print_list(*list);
                }
                else
                    continue;
            }
    }
}
