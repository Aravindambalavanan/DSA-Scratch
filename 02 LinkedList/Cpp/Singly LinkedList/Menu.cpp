#include "Menu.h"
#include <iostream>

int Menu::displayMenu()
{
    int option;
    std::cout << "Options:" << std::endl;
    std::cout << "01. Create a list" << std::endl;
    std::cout << "02. Display the list" << std::endl;
    std::cout << "03. Add a node at the beginning" << std::endl;
    std::cout << "04. Add a node at the end" << std::endl;
    std::cout << "05. Add a node before a given node" << std::endl;
    std::cout << "06. Add a node after a given node" << std::endl;
    std::cout << "07. Delete a node from the beginning" << std::endl;
    std::cout << "08. Delete a node from the end" << std::endl;
    std::cout << "09. Delete a given node" << std::endl;
    std::cout << "10. Delete a node after a given node" << std::endl;
    std::cout << "11. Delete the entire list" << std::endl;
    std::cout << "12. Sort the list" << std::endl;
    std::cout << "13. Exit" << std::endl;
    std::cout << "\nEnter your option: ";
    std::cin >> option;
    return option;
}