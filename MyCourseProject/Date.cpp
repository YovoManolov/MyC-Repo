#include <iostream>
using namespace std;
#include "Date.h"


Date::Date(){};
Date::Date(int day,int month ,int year)
: _day(day),_month(month),_year(year)
{}

Date::~Date(void) {}

int Date::getDay(){
	return _day;
}

void Date::setDay(int day){
    day = day;
}

int Date::getMonth(){
	return _month;
}

void Date::setMonth(int month){
    _month = month;
}

unsigned int Date::getYear(){
	return _year;
}

void Date::setYear(unsigned int year){
    _year = year;
}
