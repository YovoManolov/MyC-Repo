#include "FileHandling.h"
#include <iostream>
using namespace std;


FileHandling::FileHandling(){};
FileHandling::~FileHandling()
{}


bool FileHandling::writeStudents(){
	Date birthDate1(25,4,1996);
	Student student1("Name1",121215173,birthDate1,4.70);


	ofstream ofs(_fileName, ios::binary);
	ofs.write((char *)&student1, sizeof(student1));

}
bool FileHandling::readStudents(){
	Student student;

	ifstream ifs(_fileName, ios::binary);

	ifs.read((char *)&student, sizeof(student));

	/*  
	string _name;
	unsigned long int _fn ;
	Date  _birthDate;*/

	cout << "Student Information\n";
	cout << "Student Name:      \n" << student.getName() << endl;
	cout << "Faculty Number:	\n" << student.getFn()   << endl;
	cout << "Age:          	    \n" << student.getAge()  << endl;
}