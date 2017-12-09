/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: yovo
 *
 * Created on November 26, 2017, 10:11 PM
 */

#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

/*
 * 
 */
class Point{
     int x,y;
    char* name;
    
    public:
        Point();
        int get_x(){
            return x;
        }
        int get_y(){
            return y;
        }
        char* get_name(){
            return name;
        }
};

Point::Point(){
    char str[10]; 
    cout<<"x=";
    cin >>x ;
    cout<<"y=";
    cin >>y;
    cout<<"name=";
    cin >> str;
    name = new char[strlen(str) + 1];
    strcpy(name, str);
}

class Circle{
    Point point;
    int rad;
public:
    Circle();
    int getRad();
    void drowCircle();
};


Circle::Circle(){
    cout<<"rad= ";
    cin >>rad ;
}

int Circle::getRad(){
    return rad;
}

void Circle::drowCircle(){
   cout<<"x="<<point.get_x()<<",y="<<point.get_y()<<"\n"
       <<",name= "<<point.get_name()<<",radius="<< getRad()<<endl;
}

int main(int argc, char** argv) {
    Circle c;
    c.drowCircle();
    return 0;
}

