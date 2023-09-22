#ifndef ARRAY_H
#define ARRAY_H

class Array
{
private:
  int* arr;
  int size;

public:
  Array(int initialSize);
  ~Array();
  void insertAtBeginning(int element);
  void insertAtEnd(int element);
  void insertAtPosition(int element, int position);
  void deleteAtBeginning();
  void deleteAtEnd();
  void deleteAtPosition(int position);
  void sort();
  void display();
  void reverse();
};

#endif