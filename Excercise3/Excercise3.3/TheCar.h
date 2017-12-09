/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TheCar.h
 * Author: yovo
 *
 * Created on November 26, 2017, 11:11 PM
 */

#ifndef THECAR_H
#define THECAR_H

#include <iostream>
#include "Car.h"
using namespace std;

class TheCar:Car{
    int numb;
public:
    void makeTheCar(char *a, int b, int n);
    void printTheCar();
};

#endif /* THECAR_H */

