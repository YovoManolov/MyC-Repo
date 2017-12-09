#include <cstdlib>
#include <iostream>
using namespace std;

class TestClass{
    int *arr;
    int _arrSize;
    
public:
    TestClass(int arraySize);
    void operator+=(int);
    void operator-=(int);
    void printArray();
};

TestClass::TestClass(int arraySize){
    _arrSize = arraySize;
    arr = new int[arraySize];
    int i;
    for(i = 0; i<_arrSize;i++){
       cout<< "Enter element "<<i <<" = ";
       cin>> *(arr+i) ;
       cout<<"\n";
    }
}

void TestClass::operator += (int numbToAdd){
  
   for(int i = 0 ;i < _arrSize ; i++){
       *(arr+i) +=2;
   }
}

void TestClass::operator -= (int numbToSubs){
   for(int i = 0 ;i < _arrSize ; i++){
       *(arr+i) -= numbToSubs ;
   }
}

void TestClass::printArray(){
    for(int i = 0 ;i < _arrSize ; i++){
       cout<<" arr[i]  = " << *(arr+i) << endl;
    }
}

int main(int argc, char** argv) {
    TestClass tc (5);
    tc.printArray();
    tc += 2;
    tc.printArray();
    tc -=2; 
    tc.printArray();
    
    return 0;
}