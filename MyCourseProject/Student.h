#include <iostream>
#include <string>
using namespace std;
#include "Date.h"

class Student{
private:
	string _name;
	unsigned long int _fn ;
	Date  _birthDate;
	float _averageSuccess;
public :
	Student();
	Student(string name, unsigned long int fn, Date birthDate, float averageSuccess);
	~Student(void);


	string getName();

	void setName(string name);

	unsigned long int getFn();

	void setFn(unsigned long int fn);

	Date* getBirthDate();

	void setBirthDate(Date birthDate);

	int getCurrentAge(Date currentDate);
};
