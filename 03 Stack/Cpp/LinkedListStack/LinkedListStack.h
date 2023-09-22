#ifndef LINKEDLISTSTACK_H
#define LINKEDLISTSTACK_H

class LinkedListStack
{
private:
  struct Node
  {
    int data;
    Node* next;

    Node(int val)
      : data(val)
      , next(nullptr)
    {
    }
  };

  Node* top;

public:
  LinkedListStack();
  ~LinkedListStack();
  void push(int val);
  int pop();
  bool isEmpty();
  int peek();
  void display();
};

#endif