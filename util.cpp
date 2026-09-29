#include "util.h"
#include <iostream>

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

Person::~Person() { std::cout << "Person deconstructor called!" << std::endl; }

void Person::printFullName() {
  std::cout << "Full Name: " << this->firstName << " " << this->lastName
            << std::endl;
}

void Person::setAge(int age) {
  this->age = age;
  std::cout << "Age set!" << std::endl;
}

void Person::setProf(std::string prof) {
  this->profession = prof;
  std::cout << "Profession set!" << std::endl;
}