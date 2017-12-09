#ifndef FILE_H_INCLUDED
#define FILE_H_INCLUDED

#include "Student.h"
#include "Date.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class FileHandling
{
    private:
        Student *_studentArr;
        int _sizeOfArray = 0;
        Student _st ;
	string _fileName ;
    public:
        FileHandling();
        ~FileHandling();
        
        string getFileName();
        void setFileName(string fileName);
        
        Student getStudent();
        void setStudent(Student st);
        
        Student* getStudentArr();
        void setStudentArr(Student *studentArr);
        
        bool readStudents();
        bool writeStudents();
        
        Student* createStudentArray();
};

#endif 
