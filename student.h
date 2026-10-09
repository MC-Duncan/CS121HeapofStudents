#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

#include <string>
#include "dates.h"
#include "address.h"

class Student{
  private:
    std::string studentString;
    std::string firstName;
    std::string lastName;
    Date* dob;
    Date* expectedGrad;
    Address* address;
    int creditHours;

  public:
    Student();
    ~Student();
    void init(std::string studentString);
    void printStudent();
}; // end class def

#endif
