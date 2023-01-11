#include <stdio.h>
#include <stdlib.h>

/**
 * a tail-recursive to count the no. of nodes
 */
struct node{
        int data;
        struct node* next;
};

void push(struct node** head, int new_data)
{
        /**
         * allocating a new node
         */
        struct node* new_node = (struct node*)malloc(sizeof(struct node));

        /**
         * put in the data
         */
        new_node -> data = new_data;

        /**
         * link the old list of the new node
         */
        new_node -> next = (*head);

        /**
         * move the head to point the new _node
         */
        (*head) = new_node;
}

int getCount(struct node *head, int count = 0)
{
	if (head == NULL)
		return count;
	return getCount(head -> next, count + 1);
}

int main(void)
{
        // start with an empty list
        struct node *head = NULL;
        // use push() to construct the below list
        // 1 -> 2 -> 1 -> 3 -> 1
        push(&head, 1);
        push(&head, 3);
        push(&head, 1);
        push(&head, 2);
        push(&head, 1);

        // function call
        printf("count of nodes is %d",getCount(head));
        return (0);
}
