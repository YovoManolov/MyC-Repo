#ifndef __STUDENT_H_INCLUDED__
#define __STUDENT_H_INCLUDED__

#include "Date.h"
#include <time.h> 
#include <iostream>
#include <string>
using namespace std;


class Student{
    private:
            string _name;
            unsigned long int _fn;
            Date  _birthDate;
            float _averageSuccess;
            Student* next;
            
            friend class StudentLLHandler;
    public :
            
            
            Student();
            Student(string name, unsigned long int fn,
            Date birthDate,float averageSuccess);
            ~Student();
            friend ostream& operator<< (ostream &out,Student &student);

            string getName();
            void setName(string name);

            unsigned long int getFn();
            void setFn(unsigned long int fn);
            int getCurrentAge();
            
            Date getBirthDate();
            void setBirthDate(Date birthDate);

            float getAverageSuccess();
            void setAverageSuccess(float averageSuccess);
            
            
};

#endif	// 

