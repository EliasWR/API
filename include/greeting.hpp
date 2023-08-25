#ifndef EXERCISE1_GREETING_H
#define EXERCISE1_GREETING_H

#include "person.hpp"

#include <iostream>

class Greeting {
public:
    Greeting() = default;
    static const void greetPerson (Person person) {
        std::cout << "Hello ";
        person.printPersonName();
        std::cout << ", and welcome to this application. \n";
    }
};
#endif //EXERCISE1_GREETING_H
