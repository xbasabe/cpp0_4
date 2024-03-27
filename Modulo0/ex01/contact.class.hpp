#include <iostream>
#include <string>

#ifndef CONTACT_H
#   define CONTACT_H
class contact {
    private:
    int index;

    public:
    std::string name;
    std::string l_name;
    std::string nickname;
    int         number;
    std::string secret;
    contact(void);
    ~contact(void);
    int getindex(void);
    void add_contac(contact instance);
};
#endif
