#include <iostream>
using namespace std;
#include "FileHandling.h"

int main(){
    FileHandling fhandl;
    
    fhandl.writeStudents();
    fhandl.readStudents();

    return 0;
}
