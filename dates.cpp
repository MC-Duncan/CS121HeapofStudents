#include "dates.h"
#include <iostream>

Dates::Dates(){
  month = 1;
  day = 1;
  year = 2000;
} // end constructor

void Dates::init(std::string dateString);
  // make a stringstream
  std::stringstream converter;
  std::string sMonth;
  std::string sDay;
  std::string sYear;

  // convert to temp strings
  converter.str(dateString);
  getline(converter, sMonth, '/');
  getline(converter, sDay, '/');
  getline(converter, sYear, '/');

  // convert to ints
  converter.clear();
  converter.str("");

  converter << sDay << " " << sMonth << " " << sYear;
  converter >> month >> day >> year;
} // end init

void Dates::printDate(){
  std::string months[] = {"Null", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December};
  std::cout << months[month] << " ";
  std::cout << day << ", " << year << std::endl;
} // end printDate
