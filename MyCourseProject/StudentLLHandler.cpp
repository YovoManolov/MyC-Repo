
#include "StudentLLHandler.h"
#include <cstdlib>
#include <fstream>
#include <iostream>
using namespace std;

StudentLLHandler::StudentLLHandler(){
    _head = _curr = _temp = NULL ;
}

void StudentLLHandler::addStudent(string name,unsigned long int fn,
    Date birthDate,float averageSuccess){
    
    Student* newStudent = new Student();
    newStudent->next = NULL;
    
    newStudent->_name = name;
    newStudent->_fn = fn;
    newStudent->_birthDate = birthDate;
    newStudent->_averageSuccess = averageSuccess;
    
    
    if(_head == NULL){
         _head = newStudent;
    }else{
        _curr = _head;
        while(_curr->next != NULL){
            _curr = _curr->next;
        }
        _curr->next = newStudent;
    }
    
    
}

void StudentLLHandler::deleteStudentLL(){
    
    _curr = _head;
     while(_curr != NULL){ 
         _temp= _curr->next;
         delete[] _curr;
         _curr = _temp;
     }
}


void StudentLLHandler::deleteStudentByFn(unsigned long int fn){
    Student* studentToDelete;
    _temp = _head;
    _curr = _head;
    
    while(_curr != NULL && _curr->_fn != fn){
       _temp = _curr;
       _curr = _curr->next;
    }if(_curr == NULL){
        cout<<"Student with this fn: "<< fn <<" was no found" << endl;
    }else{
        studentToDelete = _curr;
        if(studentToDelete == _head){
            _head = _head->next;
            _temp = NULL;  
        }else{
            _curr = _curr->next;
            _temp->next = _curr;  
        }
        delete studentToDelete;
        cout<<"Student with this fn: "<< fn <<"was DELETED!" << endl;
    }
}
void StudentLLHandler::printStudents(){
     _curr = _head;
     while(_curr != NULL){
         cout<<*_curr;
         _curr = _curr->next;
     }
}


void StudentLLHandler::writeStudentLLIntoFile(){
        
     fstream file("Student.txt", ios::out|ios::app);
        
     if(!file.is_open()){
            cout<<"UnableToOpenFile\n";
     }else{
             string name;
             unsigned long int fn ;
             int day,month,year;
             Date  birthDate ;
             float averageSuccess;
             
            _curr = _head;
            while(_curr != NULL){
                
                name = _curr->_name;
                fn =  _curr->_fn;
                birthDate = _curr->_birthDate;
                averageSuccess = _curr->_averageSuccess;
                
                file.write(name.c_str(),name.length() + 1);
                
                file.write(reinterpret_cast<char *> (&fn),
                        sizeof(unsigned long int));
                
                day = birthDate.getDay();
                month = birthDate.getMonth();
                year = birthDate.getYear();
                
                file.write(reinterpret_cast<char *> (&day),
                        sizeof(day));
                file.write(reinterpret_cast<char *> (&month),
                        sizeof(month));
                file.write(reinterpret_cast<char *> (&year),
                        sizeof(year));
                
                file.write(reinterpret_cast<char *> (&averageSuccess),
                        sizeof(averageSuccess) );
                
                _curr = _curr->next;
            }
            
            file.close();
        }
}

void StudentLLHandler::readFromFile(bool withCondition){
    
        string name;
        unsigned long int fn ;
        int day,month,year;
        float averageSuccess;
        
        fstream file("Student.txt", ios::in);
        
        if(!file.is_open()){
            cout<<"Unable to open file \n";
        }else{
           while(!file.eof()){
                getline(file,name,'\0') ;
                if(name.empty())break;
                
                file.read((char *)&fn, sizeof(unsigned long int));
                file.read((char *)&day,sizeof(int));
                file.read((char *)&month,sizeof(int));
                file.read((char *)&year,sizeof(int));
                file.read((char *)&averageSuccess, sizeof(float));
                
                Date birthDate(day,month,year);
                
                Student st(name,fn,birthDate,averageSuccess);
                
                int ageOfStudent =  st.getCurrentAge();
                
                if(withCondition){
                    if(ageOfStudent >= 18 && ageOfStudent <= 26 ){
                        addStudent(name,fn,birthDate,averageSuccess);
                    }
                }else{
                     addStudent(name,fn,birthDate,averageSuccess);
                }
                
                if(file.eof()) break;
            }
         }
          file.close();
          if(withCondition) printStudents();
}

void StudentLLHandler::averageStudentSuccess(){
    double avrgSccssOfAll = 0;
     int counter = 0; 
    _curr = _head;
     while(_curr != NULL){
         counter ++;
         avrgSccssOfAll += _curr->getAverageSuccess() ;
         _curr = _curr->next;
     }
     double averageResult = avrgSccssOfAll/counter;
     cout<<"\n\nAverage success of all students is: "<< averageResult;
}
