#include <stdio.h>

/**
 * getNth - takes head pointer of the linked list and index as arguments
 * and return data at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i;
    listint_t *current = head;

    if (head == NULL)
    {
        return (NULL);
    }
    for (i = 0; i < index-1; i++)
    {
        if (current->next == NULL)
        {
            return (NULL);
        }
        current = current->next;
    }
    return (current);
}
