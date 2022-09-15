/*
CSCI 104: Homework 1 Problem 1

Write a recursive function to split a sorted singly-linked
list into two sorted linked lists, where one has the even 
numbers and the other contains the odd numbers. Students 
will receive no credit for non-recursive solutions. 
To test your program write a separate .cpp file and #include
split.h.  **Do NOT add main() to this file**.  When you submit
the function below should be the only one in this file.
*/

#include "split.h"
#include <cstddef>
#include <iostream>

using namespace std;

void move ( Node **destiny, Node**source );
//(functions used to test program )
void append (Node *&head, int n);
void printList(Node* head);


void split(Node*& in, Node*& odds, Node*& evens)
{
	//check if value is positive or negative 
	if( in->value % 2 == 0)
	{
		odds = in;
		move( &evens, &in);
	}
	else
	{
		odds = in;
		move( &odds, &in);
	}
	
}

/*Take the node from the front of
the source, and move it to the front
of the destiny (even or odd list)*/
void move( Node **destiny, Node**head )
{
	Node* newNode = *head; 
        
	*head = newNode->next; 
				
	newNode->next = *destiny; 
				
	*destiny = newNode; 

	//delete node from original list 
	delete head;
}

//functions used to test program
//used to print values from each list 
void printList(Node* head)
{
	Node* temp = head;
	cout << temp->value << endl;
}
//used to assign values to the linked list 
void append (Node *&head, int n)
{
	if (head == NULL) head = new Node (n, NULL);
	else append (head->next, n);
}







