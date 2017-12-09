/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: yovo
 *
 * Created on November 27, 2017, 12:29 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
class coord {
int x, y; //кординатни стойности
public:
coord() { x=0; y=0; }
coord(int i, int j) { x=i; y=j; }
void get_xy(int &i, int &j) { i=x; j=y; }
coord operator--(); //prefix
coord operator--(int notused); //postfix
};
coord coord::operator--() //Предефиниране на префиксен -- за класа coord.
{
x--;
y--;
return *this;
}
coord coord::operator--(int notused)
{
 cout << "(o1--) X:" << --x << ", Y:" << --y << "\n";
return *this;
}
int main(int argc, char** argv)
{
    coord o1(10, 10);
    int x, y;
    --o1; //декрементиране на обект
    o1.get_xy(x, y);
    cout << "(--o1) X:" << x << ", Y:" << y << "\n";

    o1--;
   return 0;
}
