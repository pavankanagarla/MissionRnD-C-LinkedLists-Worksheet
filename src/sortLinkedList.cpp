/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	int len = 0; //length variable
	int i;
	int temporary_variable;
	struct node *starting_point = head;
	struct node *temp = NULL;
	if (head == NULL)
		return NULL;
	while (head != NULL){
		len++;
		head = head->next;
	}
	head = starting_point;
	temp = head->next;
	for (i = 0; i < len; i++){
		while (temp != NULL){
			if (head->num > temp->num){
				temporary_variable = head->num;
				head->num = temp->num;
				temp->num = temporary_variable;
			}
			head = head->next;
			temp = temp->next;
		}
		head = starting_point;
		temp = head->next;
	}
	head = starting_point;
	return head;
}