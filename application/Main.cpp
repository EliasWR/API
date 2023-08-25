#include <vector>
#include "greeting.hpp"
#include <algorithm>

int main () {
    std::vector<Person> people = {
            Person ("Elias", "Refsdal"),
            Person ("Martin","Simengård"),
            Person ("Filip","Blaafjell"),
            Person ("Robert","Robertsen")
    };

    // std::execution::par provides an error on mac
    std::for_each (people.begin(), people.end(), [](const Person& p) {
        Greeting::greetPerson(p);
    });
    return 0;
};