/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: yovo
 *
 * Created on November 4, 2017, 11:08 PM
 */

#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

/*
 * 
 */

class triangle {
    private:
        double a, b, c;

    public:
        triangle();
        ~triangle();
        double face();
        double face(double *);
        void show(char *);
};


triangle::triangle(){
    do{
        cout<<"\n\n Enter three values for the sides of "
                "triangle: \n "<<endl;
        
        cin >>a>>b>>c;
    }while(((a>0)&&(b>0)&&(c>0)&&(a+b > c)
            &&((a+c) > b)&&((b+c)>a)));
}

triangle::~triangle(){
    cout<<"Destructing triangle obj";
}

double triangle::face(){
    int p = (a+b+c)/2;
    
    double face = sqrt(p*(p-a)*(p-b)*(p-c));
    return face;
}
double triangle::face(double *p){
    double pp  = a+b+c;
    *p = pp;
    pp /= 2;
    double face = sqrt(pp*(pp-a)*(pp-b)*(pp-c));
    return face;
}

void triangle::show(char *name)
{
cout << "Sides of the triangle " << name << ":\n";
cout << "a=" << a << ",b=" << b << ",c=" << c;
}

int main(int argc, char** argv) {
    triangle tr1,tr2;
    double p,s;
    
    tr1.show("tr1");
    cout<<"The face of triangle1 is s="<<tr1.face()<<endl;
    
    tr2.show("tr2");
    s = tr2.face(&p);
    cout<<"The face of triangle1 is s="<<s<< ",and the "
            "parimeter is p=" << p;
    return 0;
}

