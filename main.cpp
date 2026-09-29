#include <iostream>
#include "util.h"


int main() {
    Person p1 = Person("John", "Doe");
    p1.printFullName();
    p1.setAge(24);
    p1.setProf("Engineer");


    return 0;
}
