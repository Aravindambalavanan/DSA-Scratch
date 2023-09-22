#include "Array.h"
#include <iostream>

Array::Array(int initialSize)
{
  size = 0;
  arr = new int[initialSize];
}

Array::~Array()
{
  delete[] arr;
}

void
Array::insertAtBeginning(int element)
{
  for (int i = size; i > 0; i--) {
    arr[i] = arr[i - 1];
  }
  arr[0] = element;
  size++;
}

void
Array::insertAtEnd(int element)
{
  arr[size] = element;
  size++;
}

void
Array::insertAtPosition(int element, int position)
{
  if (position < 0 || position > size) {
    std::cout << "Invalid position." << std::endl;
    return;
  }
  for (int i = size; i > position; i--) {
    arr[i] = arr[i - 1];
  }
  arr[position] = element;
  size++;
}

void
Array::deleteAtBeginning()
{
  if (size == 0) {
    std::cout << "Array is empty. Cannot delete." << std::endl;
    return;
  }
  for (int i = 0; i < size - 1; i++) {
    arr[i] = arr[i + 1];
  }
  size--;
}

void
Array::deleteAtEnd()
{
  if (size == 0) {
    std::cout << "Array is empty. Cannot delete." << std::endl;
    return;
  }
  size--;
}

void
Array::deleteAtPosition(int position)
{
  if (size == 0 || position < 0 || position >= size) {
    std::cout << "Invalid position or array is empty. Cannot delete."
              << std::endl;
    return;
  }
  for (int i = position; i < size - 1; i++) {
    arr[i] = arr[i + 1];
  }
  size--;
}

void
Array::sort()
{
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void
Array::display()
{
  if (size == 0) {
    std::cout << "Array is empty." << std::endl;
    return;
  }
  for (int i = 0; i < size; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}

void
Array::reverse()
{
  int left = 0;
  int right = size - 1;
  while (left < right) {
    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;
    left++;
    right--;
  }
}