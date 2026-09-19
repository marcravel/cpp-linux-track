#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(double w, double h) {
    this->width = w;
    this->height = h;
    std::cout << "Rectangle created!" << std::endl;
}

Rectangle::~Rectangle() {
    std::cout << "Rectangle deconstructor!" << std::endl;
}