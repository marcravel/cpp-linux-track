#include <iostream>
#include <string>

class Rectangle {
  private:
    /* data */
    double width;
    double height;

  public:
    Rectangle(double w, double h);
    ~Rectangle();
};

class Person {
  private:
  //data
  std::string firstName;
  std::string lastName;
  int age;
  std::string profession;

  public:
    Person(std::string fName, std::string lName);
    ~Person();

    void printFullName();
    void setAge(int age);
    void setProf(std::string prof);
};


