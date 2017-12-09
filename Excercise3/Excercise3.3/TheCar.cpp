/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include<iostream>
#include "TheCar.h"
using namespace std;

void TheCar::makeTheCar(char *a, int b, int n){
    makeCar(a,b);
    numb = n;
}

void TheCar::printTheCar(){
    printCar();
    cout<<"number= " << numb<<"\n";
}
