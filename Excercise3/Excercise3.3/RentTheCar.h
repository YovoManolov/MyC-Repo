/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RentTheCar.h
 * Author: yovo
 *
 * Created on November 26, 2017, 11:11 PM
 */

#ifndef RENTTHECAR_H
#define RENTTHECAR_H
#include <iostream>
#include "TheCar.h"
using namespace std;

class RentTheCar:TheCar{
    int tax;
public:
    void makeRentTheCar(char *m,int y,int n,int t);
    void printRentTheCar();
};
#endif /* RENTTHECAR_H */

