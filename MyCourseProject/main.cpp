#include <iostream>
using namespace std;
#include "FileHandling.h"
#include "StudentLLHandler.h"

int main(){
    
    FileHandling fhandl;
    StudentLLHandler stLlHandl;
    
    stLlHandl = fhandl.createStudentList();
    stLlHandl.writeStudentLLIntoFile();
    
    fhandl.printStudents();
    

    return 0;
}
