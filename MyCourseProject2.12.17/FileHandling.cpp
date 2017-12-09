
#include "FileHandling.h"
#include <iostream>
#include <fstream>
using namespace std;

FileHandling::FileHandling()
:_fileName("StudentsInfo.txt"){}
FileHandling::~FileHandling(){}


   string FileHandling::getFileName(){
       return _fileName;
   }
   void FileHandling::setFileName(string fileName){
       _fileName = fileName;
   }
        
   Student FileHandling::getStudent(){
       return _st;
   }
   void FileHandling::setStudent(Student st){
       _st = st;
   }
        
   Student* FileHandling::getStudentArr(){
       return _studentArr;
   }
   void FileHandling::setStudentArr(Student *studentArr){
       _studentArr = studentArr;
   }



Student* FileHandling::createStudentArray(){
     setStudentArr(_st.createNewStudent(getStudentArr()));
}


bool FileHandling::writeStudents(){
        
        for(int i = 0;i<4 ;i++){
            setStudentArr(createStudentArray());
        }
    
        fstream file("Student.txt", ios::out|ios::app);
        Student *studentArr;
        studentArr = getStudentArr();
        
        if(!file.is_open()){
            cout<<"UnableToOpenFile\n";
        }else{
             string name;
             unsigned long int fn ;
             Date  birthDate;
             float averageSuccess;
             
             
            for(int i = 0;i<4;i++){
                
                name = studentArr[i].getName();
                fn = studentArr[i].getFn();
                birthDate = studentArr[i].getBirthDate();
                averageSuccess = studentArr[i].getAverageSuccess();
                
                file.write( studentArr[i].getName().c_str() ,name.length()+1);
                
                file.write(reinterpret_cast<char *> (&fn),
                        sizeof(unsigned long int) );
                
                file.write(reinterpret_cast<char *> (&birthDate),
                        sizeof(birthDate));
                
                file.write(reinterpret_cast<char *> (&averageSuccess),
                        sizeof(averageSuccess) );
            }
            file.close();
        }
        delete studentArr;
        return true;

}
bool FileHandling::readStudents(){
	Student student ;
       
        string name;
        unsigned long int fn ;
        Date  birthDate;
        float averageSuccess;
        
        fstream file("Student.txt", ios::in);
        
        if(!file.is_open()){
            cout<<"UnableToOpenFile \n";
        }else{
//            int end = file.tellg();
//            file.seekg(0);
            for(int i = 0 ;i < 4 ;i ++){
                
                getline(file,name,'\0');
                file.read((char *)&fn, sizeof(unsigned long int));
                file.read((char *)&birthDate, sizeof(Date));
                file.read((char *)&averageSuccess, sizeof(float));
                
                student.printStudent(name,fn,birthDate,averageSuccess);
                
            };
            
            file.close();
        }
        return true;
}
