#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

class DoublyLinkedList
{
public:
  DoublyLinkedList();
  ~DoublyLinkedList();
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
  struct DNode
  {
    int data;
    DNode* prev;
    DNode* next;
  };
  DNode* start;
};

#endif