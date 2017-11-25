/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: yovo
 *
 * Created on November 4, 2017, 10:32 PM
 */

#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

//
//клас масив , който съдържа 2 основни фукнци
//-една , която съхранява информацията от масива
//- която извлича инфомацията
//
//Тези фукнции могат да се проверят по време на изпълнение
//дали не надхвърлят границите на масива.

class array {
    int size;
    char *p;
    
public:
    array(int num);
    ~array(){
        delete []p;
    }
    
    char &put(int i);
    char get(int i);
};

array::array(int num){
    
    //заделянето на памет с помощта на 
    // позволява да се декларират масиви с различни 
    //дължини
    
    p = new char [num];
    if(!p){
        cout<<"Allocation error" << endl;
        exit(1);
    }
    
    cout << "Memmory for Array allocated successfuly!" <<endl;
    size = num;
}

//компилатора преценява дали
//да върне псевдоним или елемент 
//от масива по типа на връщаната стойност 

char &array::put(int i){
    if(i<0 || i >size){
        cout<<"Boundries error!!!" << endl;
        exit(1);
    }
    return p[i]; //Връща псевдоним за p[i];
}

char array::get(int i){
    if(i<0 || i >size){
        cout<<"Boundries error!!!" << endl;
        exit(1);
    }
    return p[i]; //връща символ
}

/* Псевдоним като върнат резултат от фукнция */
int main(int argc, char** argv) {
    array a(10);
    a.put(3) = 'X';
    a.put(2) = 'R';
    cout << a.get(2) << "\n" << a.get(3);
    cout << "\n";
    a.put(11) = '!';
    return 0;
}

