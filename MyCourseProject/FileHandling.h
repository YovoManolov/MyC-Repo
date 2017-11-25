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
	string _fileName ;
    public:
        FileHandling();
        ~FileHandling();
        bool readStudents();
        bool writeStudents();

};

#endif 
