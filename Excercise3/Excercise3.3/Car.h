/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Car.h
 * Author: yovo
 *
 * Created on November 26, 2017, 11:10 PM
 */

#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string.h>
using namespace std;

class Car{
    char *mark;
    int year;
public:
    void makeCar(char* ,int);
    void printCar();
};


#endif /* CAR_H */

