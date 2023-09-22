#include <cstdlib>
#include <iostream>

#include "CircularLinkedList.h"
#include "Menu.h"

int
main()
{
  CircularLinkedList List;
  int choice;
  while (true) {
    system("clear");
    int choice = Menu::displayMenu();
    switch (choice) {
      case 1:
        List.Create();
        std::cout << "\nLINKED LIST CREATED" << std::endl;
        break;
      case 2:
        List.Display();
        break;
      case 3:
        List.InsertAtBeginning();
        break;
      case 4:
        List.InsertAtEnd();
        break;
      case 5:
        List.DeleteAtBeginning();
        break;
      case 6:
        List.DeleteAtEnd();
        break;
      case 7:
        List.DeleteList();
        std::cout << "\nLINKED LIST DELETED" << std::endl;
        break;
      case 8:
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