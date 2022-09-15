#ifndef SPLIT_H
#define SPLIT_H


struct Node 
{
  int value;
  Node* next;

  //constructor 
  Node(int v, Node* n)
  {
    value = v;
    next = n;
  }
};

void split(Node*& in, Node*& odds, Node*& evens);
void move (Node **destiny, Node **source);
void append (Node *&head, int n);
void printList(Node* head);




#endif
