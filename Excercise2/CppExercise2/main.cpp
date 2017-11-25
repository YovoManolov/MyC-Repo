/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: yovo
 *
 * Created on November 4, 2017, 10:20 PM
 */

#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;
class point {
    private:
        double x;
        double y;
    public:
        point(double xcoord, double ycoord); 
        void print();   
        double dist(const point &p1, const point &p2);
        ~point(); //Деструктор
};

point::point(double xcoord, double ycoord) {
    cout << "Creating Point(" << xcoord << "," << ycoord << ")" << endl;    
    x = xcoord;
    y = ycoord;
}

void point::print(){
    cout << "Point(" << x << "," << y << ")";
}

//използване на псевдоними
double point::dist(const point &p1, const point &p2) {
    return sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
}

point::~point() 
{
    cout << "Destructing ";
    print();
    cout << endl;
}

int main(int argc, char** argv) {
    point a(3,4), b(10,4); //Обекти от тип Точка
    cout << "Distance between "; 
    a.print();
    cout << " and ";
    b.print();
    cout << " is " << a.dist(a,b) << endl;
    return 0;
}
