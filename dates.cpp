#include "dates.h"
#include <iostream>
#include <sstream>
#include <string>

Dates::Dates(){
  month = 1;
  day = 1;
  year = 2000;
} // end constructor

void Dates::init(std::string dateString){
  // make a stringstream
  Dates::dateString = dateString;
  std::stringstream ss;
  std::string tMonth;
  std::string tDay;
  std::string tYear;
  
  ss.clear();
  ss.str(Dates::dateString);

  // convert to temp strings
  getline(ss, tMonth, '/');
  getline(ss, tDay, '/');
  getline(ss, tYear, '/');

  ss.clear();
  ss.str("");

  // convert to ints
  std::stringstream converter;
  ss << tDay << " " << tMonth << " " << tYear;
  ss >> month >> day >> year;
} // end init

void Dates::printDate(){
  std::string months[] = {"Null", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
  std::cout << months[month] << " ";
  std::cout << day << ", " << year << std::endl;
} // end printDate
