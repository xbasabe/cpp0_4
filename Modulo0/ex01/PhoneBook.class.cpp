#include "PhoneBook.class.hpp"
#include "contact.class.hpp"
#include <iostream>
#include <iomanip> 

book::book(void){
std::cout << "book constructor called" << std::endl;
    this->stored = 0;
    return;
return;
}

book::~book(void){
    std::cout << "book destructor called" << std::endl;
    return;
}

void book::print_contacts(void){
    int i = 0;
    std::cout << "index |   name   | last name| nickname \n";
    std::cout << "_______________________________________" << std::endl;
    if (this->stored > 0)
    {
        while(i < this->stored)
        {
            std::cout << "     " << (i + 1) << "|";
            //std::cout << std::setw(10);
            book::print_field(this->contacts[i].name);
            std::cout << "|";
            //std::cout << std::setw(10);
            book::print_field(this->contacts[i].l_name);           
            std::cout << "|";
            //std::cout << std::setw(10);
            book::print_field(this->contacts[i].nickname);
            std::cout << std::endl;
            i++;
        }
        this->search();
    }
    else
        std::cout << "empty contact book\n" << std::endl;
}

void book::search(void){
    int i;
    std::cout << "\ninsert the index to get contact>";
    std::cin >> i;
    while(i < 1 || i > book::stored){  //check valid index
    std::cout << "\ninvalid index. insert new index to get contact> ";
    std::cin >> i;
    } 
    std::cout << "\nindex: " << i << "\n";
    i--;
    std::cout << "name: " << this->contacts[i].name << "\n";
    std::cout << "last name: " << this->contacts[i].l_name << "\n";
    std::cout << "nickname: " << this->contacts[i].nickname << "\n";
    std::cout << "darkest secret: " << this->contacts[i].secret << "\n";
    std::cout << "number: " << this->contacts[i].number << "\n";
}

void book::print_field( std::string field){
    int i = 0;
    std::cout.setf (std::ios::right, std::ios::adjustfield);
    std::cout << std::setw(11 - field.size()); //filed.length?
    while(i < 9 && field[i]){
        std::cout << field[i];
        i++;
    }
    if(i == 9)
        std::cout << ".";
}
