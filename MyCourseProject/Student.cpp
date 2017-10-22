
#include <iostream>
#include <string>
using namespace std;
#include "Date.h"
#include "Student.h"

Student::Student(){};


Student::Student(string name, unsigned long int fn, Date birthDate, float averageSuccess)
: _name(name), _fn(fn), _birthDate(birthDate), _averageSuccess(averageSuccess)
{}

Student::~Student(void) {}


string Student::getName(){
	return _name;
}

void Student::setName(string name){
  name = name;
}

unsigned long int Student::getFn(){
	return _fn;
}

void Student::setFn(unsigned long int fn){
    _fn = fn;
}

Date* Student::getBirthDate(){
	return &_birthDate;
}

void Student::setBirthDate(Date birthDate){
       _birthDate = birthDate;
}

int Student::getCurrentAge(Date currentDate){

       int currentYear = currentDate.getYear();
       int currentMonth = currentDate.getMonth();
      int currentDay = currentDate.getDay();

       int returnAge = currentYear - _birthDate.getYear();

       if(currentMonth < _birthDate.getMonth()){
           returnAge -= 1;
       }else if(currentMonth == _birthDate.getMonth()){
               if(currentDay < _birthDate.getDay()){
                   returnAge -=1;
               }
       }

       return returnAge ;
}
