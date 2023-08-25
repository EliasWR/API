#ifndef EXERCISE1_PERSON_H
#define EXERCISE1_PERSON_H

#include <iostream>
#include <string>

class Person {
private:
    std::string _firstName, _lastName;

public:
    /// @what Constructor for Person
    /// @param N/A
    /// @returns N/A
    /// @usage JsonFile::NodeFromJson
    /// @example Person p;
    Person() = default;

    /// @what Constructor for Person initializing firstname, lastname
    /// @param "std::string firstName" and "std::string lastName" \n
    ///         initializing only firstname and lastname of person
    /// @returns N/A
    /// @usage N/A
    /// @example Person p (firstName, lastName);
    Person(std::string firstName, std::string lastName)
            : _firstName(std::move(firstName)), _lastName(std::move(lastName)) {
    }
    /// Getters and setters
    [[nodiscard]] const std::string& getFirstName() const {
        return _firstName;
    }
    void setFirstName(std::string firstName) {
        _firstName = std::move(firstName);
    }
    [[nodiscard]] const std::string& getLastName() const {
        return _lastName;
    }
    void setLastName(std::string lastName) {
        _lastName = std::move(lastName);
    }
    const void printPersonName() {
        std::cout << _firstName << " " << _lastName;
    }
};

#endif //EXERCISE1_PERSON_H