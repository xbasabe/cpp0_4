#include "PhoneBook.class.hpp"
#include "contact.class.hpp"
#include <iostream>
#include <iomanip> 

contact::contact(void){
    std::cout << "contact constructor called" << std::endl;
    this->index += 1;
    return;
}

contact::~contact(void){
    std::cout << "contact destructor called" << std::endl;
    return;
}

int contact::getindex(void){
    return (this->index);
}

void contact::add_contac(contact &other){
    std::cout << "new contact first name: ";
    std::cin >> std::ws;
    std::getline(std::cin, other.name);
    std::cout << "new contact last name: ";
    std::getline(std::cin, other.l_name);
    std::cout << "new contact nickname: ";
    std::getline(std::cin, other.nickname);
    std::cout << "new contact darkest secret: ";
    std::getline(std::cin, other.secret);
    std::cout << "new contact phone number: ";
    std::cin >> other.number;
    /*
    std::getline(std::cin, other.number);
    while(contact::num_valid() != 0)
    {
        std::cout << "invalid entry. Enter valid number: ";
        std::cin >> other.number;
    }
    */
}
