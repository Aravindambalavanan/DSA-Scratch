#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

class ArrayStack
{
private:
  static const int MAX_SIZE = 30;
  int stack[MAX_SIZE];
  int top;

public:
  ArrayStack();
  void push(int val);
  int pop();
  int peek();
  bool isEmpty();
  bool isFull();
  void display();
};

#endif