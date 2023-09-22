#include "Menu.h"
#include <iostream>

int
Menu::displayMenu()
{
  int option;
  std::cout << "Stack Operations:" << std::endl;
  std::cout << "1. Push an element onto the stack" << std::endl;
  std::cout << "2. Pop an element from the stack" << std::endl;
  std::cout << "3. Peek at the top element of the stack" << std::endl;
  std::cout << "4. Check if the stack is empty" << std::endl;
  std::cout << "5. Display the elements in the stack" << std::endl;
  std::cout << "6. Exit" << std::endl;
  std::cout << "\nEnter your option: ";
  std::cin >> option;
  return option;
}