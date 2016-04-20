/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};
/*code to sort the linked list according to data*/
void sll_012_sort(struct node *head){
	int zero = 0;
	int one = 0;
	int two = 0;
	struct node *temp = head;
	while (head != NULL){
		if (head->data == 0){
			zero++;
		}
		else if (head->data == 1){
			one++;
		}
		else{
			two++;
		}
		head = head->next;
	}
	head = temp;
	while (head != NULL){
		if (zero != 0){
			head->data = 0;
			zero--;
		}
		else if (zero == 0 && one != 0){
			head->data = 1;
			one--;
		}
		else if (zero == 0 && one == 0 && two != 0){
			head->data = 2;
			two--;
		}
		head = head->next;
	}
}