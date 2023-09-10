#include "Array.h"
#include "Menu.h"
#include <iostream>

int main()
{
    int size, element;
    std::cout << "Enter the number of elements: ";
    std::cin >> size;
    Array array(size);
    std::cout << "Enter the elements: ";
    for (int i = 0; i < size; i++)
    {
        std::cin >> element;
        array.insertAtEnd(element);
    }
    while (true)
    {
        system("clear");
        int choice = Menu::displayMenu();
        switch (choice)
        {
        case 1:
            array.display();
            break;
        case 2:
            int element;
            std::cout << "Enter the element to insert at the beginning: ";
            std::cin >> element;
            array.insertAtBeginning(element);
            break;
        case 3:
            std::cout << "Enter the element to insert at the end: ";
            std::cin >> element;
            array.insertAtEnd(element);
            break;
        case 4:
            int position;
            std::cout << "Enter the element to insert: ";
            std::cin >> element;
            std::cout << "Enter the position to insert at: ";
            std::cin >> position;
            array.insertAtPosition(element, position);
            break;
        case 5:
            array.deleteAtBeginning();
            break;
        case 6:
            array.deleteAtEnd();
            break;
        case 7:
            std::cout << "Enter the position to delete from: ";
            std::cin >> position;
            array.deleteAtPosition(position);
            break;
        case 8:
            array.sort();
            std::cout << "Array sorted." << std::endl;
            break;
        case 9:
            array.reverse();
            std::cout << "Array reversed." << std::endl;
            break;
        case 10:
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