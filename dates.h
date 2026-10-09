#ifndef DATES_H_EXISTS
#define DATES_H_EXISTS

#include <string>

class Dates{
  private:
    std::string dateString;
    int month;
    int day;
    int year;

  public:
    Dates();
    void init(std::string dateString);
    void printDate();
}; // end class def

#endif
