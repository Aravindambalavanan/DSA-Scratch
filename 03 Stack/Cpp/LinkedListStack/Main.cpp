#include "LinkedListStack.h"
#include "Menu.h"
#include <iostream>

int
main()
{
  LinkedListStack stack;
  int choice;
  while (true) {
    system("clear");
    int choice = Menu::displayMenu();
    switch (choice) {
      case 1: {
        int val;
        std::cout << "Enter the value to push onto the stack: ";
        std::cin >> val;
        stack.push(val);
        std::cout << "\nValue pushed onto the stack" << std::endl;
        break;
      }
      case 2: {
        try {
          int poppedValue = stack.pop();
          std::cout << "Popped value: " << poppedValue << std::endl;
        } catch (const std::underflow_error& e) {
          std::cerr << e.what() << std::endl;
        }
        break;
      }
      case 3: {
        try {
          int topValue = stack.peek();
          std::cout << "Top value: " << topValue << std::endl;
        } catch (const std::underflow_error& e) {
          std::cerr << e.what() << std::endl;
        }
        break;
      }
      case 4: {
        bool isEmpty = stack.isEmpty();
        if (isEmpty) {
          std::cout << "Stack is empty" << std::endl;
        } else {
          std::cout << "Stack is not empty" << std::endl;
        }
        break;
      }
      case 5:
        stack.display();
        break;
      case 6:
        return 0;
      default:
        std::cout << "Invalid choice. Try again." << std::endl;
    }

    std::cout << "Press Enter to continue...";
    std::cin.ignore();
    std::cin.get();
  }
  return 0;
}