#ifndef SinglyLinkedList_H
#define SinglyLinkedList_H

class SinglyLinkedList
{
public:
  SinglyLinkedList();
  ~SinglyLinkedList();
  void Create();
  void Display();
  void InsertAtBeginning();
  void InsertAtEnd();
  void InsertBefore();
  void InsertAfter();
  void DeleteAtBeginning();
  void DeleteAtEnd();
  void DeleteNode();
  void DeleteAfter();
  void DeleteList();
  void Sort();

private:
  struct Node
  {
    int data;
    Node* next;
  };
  Node* start;
};

#endif