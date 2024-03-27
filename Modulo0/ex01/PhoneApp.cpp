#include <iostream>
#include <string>
#include "PhoneBook.class.hpp"
#include "contact.class.hpp"

int main(void)
{
    book my_book;
    contact cont_inst;
    std::cout << "---Welcome to magic Phone Book---" << "\n";
    std::string entry;
    while(42)
    {
        std::cout << "\nWhat do you want to do?"<< "\n";
        std::cout << "   ADD,  add a new contact"<< "\n";
        std::cout << "   SEARCH, search into your contact list" << "\n";
        std::cout << "   EXIT, quit the application" << "\n";
        std::cout << ">";
        std::cin >> entry;
        if (entry.compare("ADD") == 0 || entry.compare("add") == 0)
        {
            cont_inst.add_contac(my_book.contacts[my_book.stored]);
            my_book.stored++;
        }
        else if(entry.compare("SEARCH") == 0 || entry.compare("search") == 0)
            my_book.print_contacts();
        else if(entry.compare("EXIT") == 0 || entry.compare("exit") == 0)
            break;
        else
            std::cout << "invalid entry" << std::endl;
    } 
}
