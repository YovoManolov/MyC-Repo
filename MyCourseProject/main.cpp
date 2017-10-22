#include <iostream>
#include <math.h>
#include "Date.h"
#include "Student.h"
using namespace std;


int main()
{
    Date birthDate1(25,4,1996);
    Date birthDate2(24,4,1995);
    Date birthDate3(29,5,1997);

    Student student1("Name1",121215173,birthDate1,4.70);

    Student student2("Name2",121215099,birthDate2,5.00);

    Student student3("Name3",121215084,birthDate3,5.64);


    Date currentDate1 (25,3,2017);
    Date currentDate2 (30,4,2017);

    cout << "Age of student1 is :" << student1.getCurrentAge(currentDate1) << endl;
    cout << "Age of student3 is :" << student3.getCurrentAge(currentDate2) << endl;

    return 0;
}
