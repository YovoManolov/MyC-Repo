#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED


#include <string>
#include <iostream>
#include <fstream>
#include "Student.h"
using namespace std;

class FileHandling
{
	private:
		string _fileName = "StudentsInfo.txt";
    public:
        FileHandling();
         ~FileHandling();
         bool writeStudents();
         bool readStudents();

};

#endif // FILEHANDLING_H
