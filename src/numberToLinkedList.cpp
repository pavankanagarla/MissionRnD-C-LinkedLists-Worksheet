/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>
struct node {
	int num;
	struct node *next;
}*head;

struct node * numberToLinkedList(int N) {
	struct node *temp;
	struct node *temp1;
	if (N < 0)
		N *= -1;
	head = NULL;
	int temporaryvariable;
	/*case of zero test case*/
	if (N == 0){
		head = (struct node*)malloc(sizeof(struct node));
		head->num = 0;
		head->next = NULL;
	}
	/* code to insert the data into linked list*/
	while (N > 0){
		temporaryvariable = N % 10;
		N = N / 10;
		if (head == NULL){
			head = (struct node*)malloc(sizeof(struct node));
			head->num = temporaryvariable;
			head->next = NULL;
		}
		else{
			temp = (struct node*)malloc(sizeof(struct node));
			temp->num = temporaryvariable;
			temp->next = NULL;
			temp1 = head;
			while (temp1->next != NULL){
				temp1 = temp1->next;
			}
			temp->next = head;
			head = temp;
		}
	}
	return head;
}