/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include<iostream>
#include "RentTheCar.h"
using namespace std;


void RentTheCar::makeRentTheCar(char *m,int y,int n,int t){
    makeTheCar(m,y,n);
    tax = t;
}
void RentTheCar::printRentTheCar(){
    printTheCar();
    cout<<"tax= "<<tax << endl;
}