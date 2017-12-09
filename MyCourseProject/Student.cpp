
#include <iostream>
#include <string>
#include "Student.h"
using namespace std;


Student::Student(){};

Student::Student(string name,unsigned long int fn, Date birthDate,float averageSuccess)
:_name(name), _fn(fn), _birthDate(birthDate), _averageSuccess(averageSuccess)
{}

Student::~Student() {}


string Student::getName(){
	return _name;
}

void Student::setName(string name){
  _name = name;
}

unsigned long int Student::getFn(){
   return _fn;
}

void Student::setFn(unsigned long int fn){
    _fn = fn;
}

Date Student::getBirthDate(){
	return _birthDate;
}

void Student::setBirthDate(Date birthDate){
       _birthDate = birthDate;
}

float Student::getAverageSuccess(){
	return _averageSuccess;
}

void Student::setAverageSuccess(float averageSuccess){
       _averageSuccess = averageSuccess;
}

int Student::getCurrentAge(){

       time_t rawtime;
       struct tm * timeinfo;
       time(&rawtime);
       
       timeinfo = localtime (&rawtime);
        
        
    
       int currentYear = 1900 + timeinfo->tm_year;
       int currentMonth = timeinfo->tm_mon + 1;
       int currentDay = timeinfo->tm_mday;

       int returnAge = (int) currentYear - _birthDate.getYear();
 
       if(currentMonth < _birthDate.getMonth()){
           returnAge -= 1;
       }else if(currentMonth == _birthDate.getMonth()){
               if(currentDay < _birthDate.getDay()){
                   returnAge -=1;
               }
       }

       return returnAge ;
}


    ostream& operator<< (ostream &out,Student &student){
              // Since operator<< is a friend of the Student class, 
             //we can access Point's members directly.
             out<<"\nStudent name: "
             <<student._name<<"\nStudent fn: "
             <<student._fn<<"\nStudent birth date: "
             << student._birthDate.getDay()<<"."
             << student._birthDate.getMonth()<<"."<< student._birthDate.getYear()
             <<"\nStudent current age: "<< student.getCurrentAge()
             <<"\nStudent avarage success: "<< student._averageSuccess
             <<"\n-----------------------------------------------------------";
    return out;
}



