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

    void printFullName() {
      std::cout << "Full Name: " << this->firstName << " " << this->lastName << std::endl; 
    }

    void setAge(int age) {
      this->age = age;
      std::cout << "Age set!" << std::endl;
    }

    void setProf(std::string prof) {
      this->profession = prof;
      std::cout << "Profession set!" << std::endl;
    }

};


