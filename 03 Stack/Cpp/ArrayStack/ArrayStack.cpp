#include "ArrayStack.h"
#include <iostream>
#include <stdexcept>

ArrayStack::ArrayStack()
{
  top = -1;
}

void
ArrayStack::push(int val)
{
  if (top == MAX_SIZE - 1) {
    throw std::overflow_error("Stack Overflow");
  }
  stack[++top] = val;
}

int
ArrayStack::pop()
{
  if (top == -1) {
    throw std::underflow_error("Stack Underflow");
  }
  return stack[top--];
}

int
ArrayStack::peek()
{
  if (top == -1) {
    throw std::underflow_error("Stack is empty");
  }
  return stack[top];
}

bool
ArrayStack::isEmpty()
{
  return top == -1;
}

bool
ArrayStack::isFull()
{
  return top == MAX_SIZE - 1;
}

void
ArrayStack::display()
{
  if (isEmpty()) {
    std::cout << "Stack is empty." << std::endl;
    return;
  }

  std::cout << "Stack contents (top to bottom): ";
  for (int i = top; i >= 0; --i) {
    std::cout << stack[i] << " ";
  }
  std::cout << std::endl;
}