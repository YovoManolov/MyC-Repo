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
            unsigned long int _fn ;
            Date  _birthDate;
            float _averageSuccess;
    public :
            Student();
            Student(string name, unsigned long int fn, Date birthDate,float averageSuccess);
            ~Student();

            string getName();

            void setName(string name);

            unsigned long int getFn();

            void setFn(unsigned long int fn);

            Date getBirthDate();

            void setBirthDate(Date birthDate);

            float getAverageSuccess();

            void setAverageSuccess(float averageSuccess);
            
            int getCurrentAge();
            
            Student* createNewStudent (Student studentArray[]);
            
            void printStudent(string name,unsigned long int fn,
                Date birthDate,float avarageSuccess);
            
};

#endif	// 

