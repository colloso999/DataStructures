#include <stdio.h>

int sum_listint(listint_t *head)
{
    int sum = 0;

    if (head == NULL)   return (0);
    while (head != NULL)
    {
        /**
         * within this loop it adds the value of the current element's 'n' field
         * to the sum's variable
         */
        sum += head->n;
        /* sets the head pointer to the next element */
        head = head->next;
    }

    /* return the final value of the sum variable, which is the sum variable */
    return (sum);
}
