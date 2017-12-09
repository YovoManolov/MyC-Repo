
#include "FileHandling.h"
#include "StudentLLHandler.h"
#include <iostream>
#include <fstream>
using namespace std;

FileHandling::FileHandling(){}

FileHandling::~FileHandling(){}


StudentLLHandler FileHandling::createStudentList(){
    
    StudentLLHandler studentLLHandl;
    
    int day;
    int month;
    int year;
     
    string name;
    unsigned long int fn;
    float averageSuccess;
    
    int numberOfStudents;
    cout<<"Enter number of students to enter : " ;
    cin >> numberOfStudents;
    

    for(int i= 0 ; i< numberOfStudents; i++){
        
        do{
         cout<<"\n\nEnter day of birth: ";
         cin >> day ; cout<<endl;
         if(day < 1 || day > 31){
             cout<<"Day out of range!"<<endl;
         }
        }while(day < 1 || day > 31);
        
        do{
         cout<<"Enter month of birth: ";
         cin >> month ; cout<<endl;
         if(month < 1 || month > 12){
             cout<<"Month out of range!"<<endl;
         }
        }while(month < 1 || month > 12);
        
        do{
         cout<<"Enter year of birth: ";
         cin >> year ; cout<<endl;
         if(year < 1930 || year > 9999){
             cout<<"Year out of range!"<<endl;
         }
        }while(year < 1930 || year > 9999);
        
        
        
        Date birthDate(day,month,year);
        
        cout<<"Enter name of student: ";
        cin >> name; cout<<endl;
        cout<<"Enter fn of student: ";
        cin >> fn; cout<<endl;
        cout<<"Enter avarage success of student: ";
        cin >> averageSuccess; 
        cout<<endl;
        
        studentLLHandl.addStudent(name,fn,birthDate,averageSuccess);
        
        if(i < numberOfStudents-1){
            cout<<"--------------------------------------------------"<<endl;
            cout<<"-------------------Next Student ------------------"<<endl;
            cout<<"--------------------------------------------------"<<endl; 
        }
    }
    
    return studentLLHandl;
}
  

void FileHandling::printStudents(){
    StudentLLHandler stLLHandl,stLLHandl1;
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"--------Printing students with age between 18 and 26 ------"<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    stLLHandl.readFromFile(true); //when true with condition for age
    
    stLLHandl1.readFromFile(false); //when false without condition for age
    stLLHandl1.averageStudentSuccess();
}
