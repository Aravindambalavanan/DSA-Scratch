#include "LinkedListStack.h"
#include <iostream>
#include <stdexcept>

LinkedListStack::LinkedListStack()
  : top(nullptr)
{
}

LinkedListStack::~LinkedListStack()
{
  while (top != nullptr) {
    Node* temp = top;
    top = top->next;
    delete temp;
  }
}

void
LinkedListStack::push(int val)
{
  Node* newNode = new Node(val);

  if (top == nullptr) {
    top = newNode;
  } else {
    newNode->next = top;
    top = newNode;
  }
}

int
LinkedListStack::pop()
{
  if (top == nullptr) {
    throw std::underflow_error("Stack is Empty");
  }
  int temp = top->data;
  Node* tempNode = top;
  top = top->next;
  delete tempNode;
  return temp;
}

bool
LinkedListStack::isEmpty()
{
  return top == nullptr;
}

int
LinkedListStack::peek()
{
  if (top == nullptr) {
    throw std::underflow_error("Stack is Empty");
  }
  return top->data;
}

void
LinkedListStack::display()
{
  if (top == nullptr) {
    std::cout << "Stack is empty." << std::endl;
    return;
  }

  std::cout << "Stack contents (top to bottom): ";
  Node* current = top;
  while (current != nullptr) {
    std::cout << current->data << " ";
    current = current->next;
  }

  std::cout << std::endl;
}