/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   StudentLLHandler.h
 * Author: yovo
 *
 * Created on December 2, 2017, 5:25 PM
 */

#ifndef STUDENTLLHANDLER_H
#define STUDENTLLHANDLER_H

#include <iostream>
using namespace std;
#include "Student.h"

class StudentLLHandler{
    Student *_head;
    Student *_curr;
    Student *_temp;
    
public:
    StudentLLHandler();
    
    void addStudent(string name,unsigned long int fn,
    Date birthDate,float averageSuccess);
    void deleteStudentByFn(unsigned long int fn);
    void deleteStudentLL();
    void printStudents();
    void readFromFile(bool withCondition);
    void writeStudentLLIntoFile();
    void averageStudentSuccess();
};

#endif /* STUDENTLLHANDLER_H */

