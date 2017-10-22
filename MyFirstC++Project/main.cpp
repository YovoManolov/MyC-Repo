#include <iostream>
#include <math.h>
using namespace std;

class triangle {
    private :
        double a,b,c ;
    public :
        triangle(); // конструктор
        double face(); //декларация на член ф-я;
        void show(char *); //декларация на член ф-я;
        ~triangle(){
            cout<< "\n Destructing object triangle!\n";
        }// дееструктор

};

triangle::triangle(){
    do {
        cout << "\n\n Enter three values for the sides of the triangle:\n";
        cin >> a>>b>>c ;
    }while(!( (a>0)&&(b>0)&&(c>0)
              && ( ((a+b)>c)&&((a+c)>b)&&((b+c)>a) ) ));
}

double triangle::face(){
    double p,s ;
     p = (a+b+c)/2 ;
     s = sqrt(p*(p-a)*(p-b)*(p-c));
    return s;
}

void triangle::show(char* name) {
    cout<<"Sides of the triangle " << name << ":\n";
    cout<< "a==" <<a << ",b=" <<b <<",c=" << c;
}

int main()
{
    triangle obj1;
    double s ;
    s = obj1.face();
    obj1.show("myTriangleName");
    cout << "The face of the triangle is = " <<s;

    triangle obj2 ;
    triangle *p;
    p = &obj2;
    s = p->face();
    p->show("myTriangleName2");
    cout << "The face of the triangle is = " <<s;


    return 0;
}




