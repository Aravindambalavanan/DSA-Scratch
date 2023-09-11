#include "Menu.h"

#include <iostream>

int Menu::displayMenu()
{
    int option;
    std::cout << "Options:" << std::endl;
    std::cout << "1. Create a list" << std::endl;
    std::cout << "2. Display the list" << std::endl;
    std::cout << "3. Add a node at the beginning" << std::endl;
    std::cout << "4. Add a node at the end" << std::endl;
    std::cout << "5. Delete a node from the beginning" << std::endl;
    std::cout << "6. Delete a node from the end" << std::endl;
    std::cout << "7. Delete the entire list" << std::endl;
    std::cout << "8. Exit" << std::endl;
    std::cout << "\nEnter your option: ";
    std::cin >> option;
    return option;
}