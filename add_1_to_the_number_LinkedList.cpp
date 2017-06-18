#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct node
{
	int data;
	struct node* next;
};

void push(struct node** head, int data)
{
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = data;
	newnode->next = (*head);
	(*head) = newnode;
}

void print_list(struct node* head)
{
	struct node* curr = head;
	while(curr != NULL)
	{
		cout<<curr->data<<" ";
		curr = curr->next;
	}
	cout<<endl;
}

void reverse(struct node** head)
{
	struct node* curr = (*head);
	struct node* Prev = NULL;
	struct node* Next;

	while(curr != NULL)
	{
		Next = curr->next;
		curr->next = Prev;
		Prev = curr;
		curr = Next;
	}
	(*head) = Prev;
}

struct node* newnode(int data)
{
	struct node* x = (struct node*)malloc(sizeof(struct node));
	x->data = data;
	x->next = NULL;

	return x;
}

void add_1(struct node** head)
{
	struct node* curr = (*head);

	int carry = 0;
	int addition = curr->data + 1;
	while(curr != NULL)
	{
		if(addition > 9)
		{
			carry = 1;
			curr->data = 0;
			if(curr->next != NULL)
				curr = curr->next;
			else
				break;
		}
		else
		{
			carry = 0;
			curr->data = addition;
			if(curr->next != NULL)
				curr = curr->next;
			else
				break;
		}

		if(carry > 0)
			addition = curr->data + carry;
		else
			addition = curr->data;
	}
	if(carry > 0)
		curr->next = newnode(carry);
}

int main()
{
	struct node* head = NULL;
	push(&head, 9);
	push(&head, 9);
	push(&head, 9);
	push(&head, 1);

	print_list(head);
	reverse(&head);
	add_1(&head);
	reverse(&head);
	print_list(head);
}