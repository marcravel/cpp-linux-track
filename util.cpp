#include <iostream>
#include "util.h"

Rectangle::Rectangle(double w, double h) {
    this->width = w;
    this->height = h;
    std::cout << "Rectangle created!" << std::endl;
}

Rectangle::~Rectangle() {
    std::cout << "Rectangle deconstructor called!" << std::endl;
}

Person::Person(std::string fName, std::string lName) {
    this->firstName = fName;
    this->lastName = lName;
    std::cout << "Person created!" << std::endl;
}

Person::~Person() {
    std::cout << "Person deconstructor called!" << std::endl;
}