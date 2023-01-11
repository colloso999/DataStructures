/**
 * an iterative approach to find the length of a linked list or count of nodes in a linked list
 *
 * Time Complexity - 0(N), where N is the size of the linked list
 * SpaceTime - 0(1), as constant extra space is used 
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * linked list node
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

/**
 * getCount - count no. of nodes in alinked list
 */
int getCount(struct node* head)
{
	int count;
	struct node* current = head;
	while(current != NULL)
	{
		current = current -> next;
		count ++;
	}
	return count;
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
	printf("count of nodes is %d\n",getCount(head));
	return (0);
}
