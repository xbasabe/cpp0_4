#include "contact.class.hpp"

#ifndef BOOK_H
#   define BOOK_H

class book
{
    //funciones add y search
    public:
    contact contacts[8];
    int stored;
    book(void);
    ~book(void);
    void print_contacts(void);
    void print_field( std::string field);
    void search(void);
};
#endif
