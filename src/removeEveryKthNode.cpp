/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next = NULL;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	int i = 1;
	struct node *temp = NULL;
	struct node *starting_point = NULL;
	if (head == NULL || K <= 1)
		return NULL;
	starting_point = temp = head;
	while (temp != NULL){
		if (i % K == 0){
			head->next = temp->next;
			temp = temp->next;
			i++;
			continue;
		}
		if (i >= 2){
			head = head->next;
		}
		temp = temp->next;
		i++;
	}
	return starting_point;
}