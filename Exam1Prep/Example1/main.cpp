/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: yovo
 *
 * Created on November 30, 2017, 9:23 PM
 */

#include <cstdlib>
#include "string.h"
// Demonstration.cpp : Defines the entry point for the console application.
//
#include <iostream>

using namespace std;

class Names
{
protected:
	char* firstName;
	char* lastName;

public:
	Names(char* fName, char* lName) {
		cout << "Constructor Names class! " << endl;
		firstName = new char[strlen(fName) + 1];
		strcpy(firstName, fName);
		
		lastName = new char[strlen(lName) + 1];
		strcpy(lastName, lName);
	}

	Names(Names &obj) {
		cout << "Copy Constructor Names class! " << endl;
		firstName = new char[strlen(obj.firstName) + 1];
		strcpy(firstName, obj.firstName);

		lastName = new char[strlen(obj.lastName) + 1];
		strcpy(lastName, obj.lastName);
	}


	~Names() 
	{
		cout << "Destructor Names class! " << endl;
		delete [] firstName;
		delete [] lastName;
	}

	char* getFirstName() const { return firstName; }
	char* getLastName() const { return lastName; }

	friend void fullName(Names &names);
};


class Person
{
private:
	Names name;
	int age;

public:
	Person(char* fName, char* lNamen, int age) : name(fName,lNamen)
	{
		cout << "Constructor Person class! " << endl;
		this -> age = age;
	}

	virtual void printInfo()
	{
		cout << name.getFirstName() << " " << name.getLastName() << " age: " << age << "\n";
	}

	virtual ~Person()
	{
		cout << "Destructor Person class! " << endl;
	}

	bool operator>(const Person &p)
	{
		if (age>p.age)
			return true;
		else
			return false;
	}


};

class Student: public Person
{
	double grade;
	int number;
	
public:
	Student(char* fName, char* lNamen, int age, double gr): Person(fName, lNamen, age)
	{
		cout << "Constructor Student! " << endl;
		grade = gr;
		number = Counter++;
	}

	static int Counter;

	~Student()
	{
		cout << "Destructor Student class! " << endl;
	}

	void printInfo()
	{
		Person::printInfo();
		cout << " grade: " << grade << " number: " << number << "\n";
	}
};

void fullName(Names &names)
{
	cout << names.firstName << " " << names.lastName << endl;
}

int Student::Counter = 1;

int main(int argc, char* argv[])
{
   
    
    char *fname,*lname ;
    fname = new char[10];
    lname = new char[10];
    int age;
    double grade;
        
    int numOfSt;
    cout<<"enter number of students you want to create " <<endl;
    cin>>numOfSt;
     Student * studentArr;
    cout <<"\n"<<endl;
    for(int i = 0;i<numOfSt ; i++){
        
        
        cout<<"Enter fname: "<<endl;
        cin>> fname;
         cout<<"Enter lname: "<<endl;
        cin>> lname;
         cout<<"Enter age: "<<endl;
        cin>>age;
        cout<<"Enter grade:"<<endl;
        cin>>grade;
        
        (studentArr + i) = new Student(fname,lname,age,grade);
        
    }
    
      for(int i = 0;i<numOfSt ; i++){
        (studentArr+i)->printInfo();
        cout<<"____________________"<<endl;
        cout<<"____________________"<<endl;
    }
	return 0;
}
