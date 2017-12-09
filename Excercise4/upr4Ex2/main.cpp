/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: yovo
 *
 * Created on November 29, 2017, 9:58 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

class A{
public:
    virtual void mes1(){
        cout << "A-message1\n";
    }
    
    virtual void mes2(){
        cout << "A-message2\n";
    }
    
    void mes3(){
        cout << "A-message3\n";
    }
};

class B : public A{
    virtual void mes1(){
        cout<<"B-message3.1\n"<<endl;
    }
    void mes2(){
        cout<<"B-message3.2\n"<<endl;
    }
    void mes3(){
        cout<<"B-message3.3\n"<<endl;
    }
};

int main(int argc, char** argv) {
    A objA;
    B objB;
    
    A *p = &objB;
    p->mes1();
    p->mes2();
    p->mes3();
    p = &objA;
    p->mes1();
    
    return 0;
}

