
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

void Student::printStudent(string name,unsigned long int fn,
            Date birthDate,float avarageSuccess){
    cout<<"Student name: " << name << endl;
    cout<<"Student fn: " << fn << endl;
    cout<<"Student birth date: " << birthDate.getDay()<<" :"<<
            birthDate.getMonth()<<" :"<<birthDate.getYear()<< endl;
    cout<<"Student avarage success: "<< avarageSuccess << endl;
}



Student* Student::createNewStudent (Student *studentArray){
    int day;
    int month;
    int year;
    
    int sizeOfStudentArray = sizeof(studentArray)/sizeof(Student);
    cout<<"The size of student array is : " <<sizeOfStudentArray << endl;
            
    for(int i = 0 ;i < sizeOfStudentArray; i++){
        cout<<"Enter day of birth: ";
        cin >> day ; cout<<endl;
        cout<<"Enter month(1-12) of birth: ";
        cin >> day ; cout<<endl;
        cout<<"Enter year of birth: ";
        cin >> year; cout<<endl;
        
        Date birthDate(day,month,year);
        
        cout<<"Enter name of student: ";
        cin >> _name; cout<<endl;
        cout<<"Enter fn of student: ";
        cin >> _fn; cout<<endl;
        cout<<"Enter avarage success of student: ";
        cin >> _averageSuccess; cout<<endl;
        
        Student student(_name,_fn,birthDate,_averageSuccess);
        
        if(sizeOfStudentArray >= 4){
            Student* newStudentArray = new Student[sizeOfStudentArray+1];
        
            for(int i = 0 ;i < sizeOfStudentArray ;i++ ){
               newStudentArray[i] = studentArray[i];
            }
            
            newStudentArray[sizeOfStudentArray+1] = student;
            
            delete studentArray;
            return newStudentArray;
        }else{
            studentArray[sizeOfStudentArray+1] = student;
            return studentArray;
        }
    }
}





