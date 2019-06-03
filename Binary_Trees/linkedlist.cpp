# include<stdio.h>
# include<cstdlib>
# include <bits/stdc++.h> 

using namespace std;

struct node{ 
	int data;
	struct node *next;
};


void print_node(struct node *head){
	while (head != NULL){
		cout << head -> data << std::endl;
		head = head -> next;
	}
}

void push(struct node **head, int value){
	struct node *new_node = (struct node *)malloc(sizeof(struct node));
	new_node-> data = value;
	new_node->next = *head;
	*head = new_node;
}

void reverse(struct node *head){
	struct node *current = head;
	struct node *prev = NULL;
	struct node *next_fr = NULL;
	while (current != NULL){
		next_fr = current -> next;
		current -> next = prev;
		prev = current;
		current = next_fr;	//current becomes NULL at the end
	}
	current = prev;
	print_node(current);
}

int main(){
	struct node *head = NULL;
	push(&head, 1);
	push(&head, 2);
	push(&head, 3);
	print_node(head);
	reverse(head);
	return 0;
}