#ifndef FILE_H_INCLUDED
#define FILE_H_INCLUDED

#include "Student.h"
#include "Date.h"
#include "StudentLLHandler.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class FileHandling
{
    private:
    public:
        FileHandling();
        ~FileHandling();
        
        StudentLLHandler createStudentList();
        void printStudents();
};

#endif 
