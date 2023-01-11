#include <stdio.h>

/**
 * insert_nodeint_at_index - insert a new node with a given integer value(n) at a
 * specified position(idx) in a singly linked list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    /**
     * new node - will be used to hold the pointer of the new node that's being inserted
     * current - will be used to hold the current element in the list when iterating through it
     */
    listint_t *new_node, *current;
    unsigned int i;
    /* first checks if the passed head pointer is equal to null */
    if (head == NULL)   
        return (-1);

    if (idx == 0)
    {
        new_node = malloc(sizeof(listint_t));
        if (new_node == NULL) 
            return (-1);
        /**
         * * assigns the integer value passed as the second arg of the function 'n' to the field 'n'
         * of the struct that new_node is pointing to.
         * new_node: a pointer to a struct listint_that has been allocated memory using the malloc
         * ->: this opertor allows access to the field of struct thru a pointer
         *  the value is stored in the newly created node and will be used as the value of the node
         *  when it gets inserted into the list
         */
        new_node->n = n;
        /* used in the case where the new node needs to be inserted at the front of the linked list */
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }
    current = *head;
    for (i = 0; i < (index - 1); i++)
    {
        current = current->next;
    }
    if (current == NULL)
    {
        return (NULL);
    }
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
    {
        return (NULL);
    }
    new_node->n = n;
    /**
     * new_node is a pointer to the new_noode that was created and initialized with the given value
     * it is setting the next member of the new node to the current head of the list which is stored
     * in the memory location pointed to by the head
     * current is a pointer to the node before the desired position where the 
     * new node needs to be inserted
     * It is setting the 'next' member variable of the new node to the 'next' member variable of current
     * node, which is stored in the memory location pointed to by 'current->next'.
     * This is neccessary because it is needed to insert the new node at a specific point within the list
     * ,so that the new node is between current node and the next node and current node's  next pointer
     * will point to the new node
     */
    new_node->next = current->next;
    current->next = new_node;
    return (new_node);
}
