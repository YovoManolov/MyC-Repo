/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: yovo
 *
 * Created on November 26, 2017, 11:09 PM
 */

#include <cstdlib>
#include <iostream>
#include <string.h>

#include "RentTheCar.h"
using namespace std;

int main(int argc, char** argv) {
    RentTheCar rentTheCarObj;
    rentTheCarObj.makeRentTheCar("Ford",2001,12432,1500);
    rentTheCarObj.printRentTheCar();
    return 0;
}

