/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: yovo
 *
 * Created on November 26, 2017, 9:55 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */

class Pixel { 
    int x, y;
public: 
    int get_x();
    int get_y();
    Pixel(int a,int b){
        x = a;
        y = b;
    }
    void drawPixel();
};

int Pixel::get_x(){
    return x;
}
int Pixel::get_y(){
    return y;
}
void Pixel::drawPixel(){
    cout<<"pixel = ("<<x<<","<<y<<")"<<"\n";
}


//  ":" means "extends"  
class Circle:Pixel { 
    int radius;
    
    public:
        Circle(int,int, int);
        int getrad(){return radius;}
        void drawcirc();
};

Circle::Circle(int a, int b, int r):Pixel(a,b){
    radius = r;
}

void Circle::drawcirc(){
    cout<<"circle = ("<< get_x() << "," 
            <<get_y()<<","  <<getrad()<<")" <<endl;
}

int main(int argc, char** argv) {
    Circle c(20,20,20);
    c.drawcirc();
    return 0;
}

