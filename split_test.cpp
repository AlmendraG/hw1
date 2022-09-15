#include "split.h"
#include <cstddef>
#include <iostream>

using namespace std;

//main() to test the implementation 
int main()
{
	//start with the empty list 
	Node* head = NULL;
	Node* even = NULL;
	Node* odd = NULL;

	//creating a sample sorted list 1->2->3->4->5->6
	for(int i = 1; i <= 6; i++)
	{
		append(head, i);
	}

	cout << "Original linked list: ";

	//do the split 
	split( head, even, odd );

	cout << "List of even numbers: ";
	

	cout << "List of odd numbers";
	

	return 0; 
}