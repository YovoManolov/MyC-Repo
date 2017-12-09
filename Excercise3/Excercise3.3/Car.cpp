/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


# include <iostream>
# include "Car.h"
using namespace std;


void Car::makeCar(char* a,int y){
    mark = new char[strlen(a)+1];
    strcpy(mark,a);
    year = y;
}
void Car::printCar(){
   cout << "mark = " << mark << "\n";
   cout << "year = " << year << "\n";
}


