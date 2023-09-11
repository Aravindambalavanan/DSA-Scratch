#ifndef CIRCULARLINKEDLIST_H
#define CIRCULARLINKEDLIST_H

class CircularLinkedList
{
  public:
    CircularLinkedList();
    ~CircularLinkedList();
    void Create();
    void Display();
    void InsertAtBeginning();
    void InsertAtEnd();
    void DeleteAtBeginning();
    void DeleteAtEnd();
    void DeleteList();

  private:
    struct CNode
    {
        int data;
        CNode *next;
    };
    CNode *start;
};

#endif