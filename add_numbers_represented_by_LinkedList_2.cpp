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

void add_numbers(struct node* head1, struct node* head2)
{
	struct node* curr1 = head1;
	struct node* curr2 = head2;
	struct node* head3 = NULL;

	int carry;
	while(curr1 != NULL && curr2 != NULL)
	{
		int addition = curr1->data + curr2->data + carry;
		cout<<addition<<endl;
		if(addition > 9)
		{
			carry = 1;
			addition %= 10;
			push(&head3, addition);
		}
		else
		{
			carry = 0;
			push(&head3, addition);
		}
		curr1 = curr1->next;
		curr2 = curr2->next;
	}

	if(curr1 != NULL)
	{
		while(curr1 != NULL)
		{
			if(carry > 0)
			{
				int addition = curr1->data + carry;
				if(addition > 9)
				{
					carry = 1;
					addition %= 10;
				}
				else
					carry = 0;
				push(&head3, addition);
			}
			else
				push(&head3, curr1->data);
			curr1 = curr1->next;
		}
	}
	if(curr2 != NULL)
	{
		while(curr2 != NULL)
		{
			if(carry > 0)
			{
				int addition = curr2->data + carry;
				if(addition > 9)
				{
					carry = 1;
					addition %= 10;
				}
				else
					carry = 0;
				push(&head3, addition);
			}
			else
				push(&head3, curr2->data);
			curr2 = curr2->next;
		}
	}
	if(carry > 0)
		push(&head3, carry);
	print_list(head3);
}

int main()
{
	struct node* head1 = NULL;
	struct node* head2 = NULL;
	push(&head1, 3);
	push(&head1, 6);
	push(&head1, 5);

	push(&head2, 2);
	push(&head2, 4);
	push(&head2, 8);

	reverse(&head1);
	reverse(&head2);
	add_numbers(head1, head2);
}