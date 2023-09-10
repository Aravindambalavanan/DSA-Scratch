#include "Menu.h"
#include <iostream>

int Menu::displayMenu()
{
    int choice;
    std::cout << "Options:" << std::endl;
    std::cout << "1. Display the array" << std::endl;
    std::cout << "2. Insert an element at the beginning" << std::endl;
    std::cout << "3. Insert an element at the end" << std::endl;
    std::cout << "4. Insert an element at a specific position" << std::endl;
    std::cout << "5. Delete an element from the beginning" << std::endl;
    std::cout << "6. Delete an element from the end" << std::endl;
    std::cout << "7. Delete an element from a specific position" << std::endl;
    std::cout << "8. Sort the array using bubble sort" << std::endl;
    std::cout << "9. Reverse the array" << std::endl;
    std::cout << "10. Exit" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    return choice;
}