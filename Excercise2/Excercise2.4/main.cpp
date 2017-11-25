/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: yovo
 *
 * Created on November 5, 2017, 1:27 AM
 */
#include <cstdlib>
#include <iostream>
using namespace std;


class Stack {
    char buf[26];
    
  public:
      
    char* loadstack();
    char* loadstack(int);
};
char* Stack::loadstack()
{
    for(int i=0; i<26; i++)
    buf[i] = 'a' + i;
    return buf;
}
char* Stack::loadstack(int c)
{
    if(c == 1)
        for(int i=0; i<26; i++) 
            buf[i] = 'a' - 32 + i;
    return buf;
}


int main(int argc, char** argv) {
    Stack s;
    char *p;
    
    p = s.loadstack();
    
    for(int i=0; i<26; i++)
        cout << *(p+i);
    
    cout << "\n";
    
    p = s.loadstack(1);
    for(int i=0; i<26; i++)
        cout << *(p+i);
    
    cout << "\n";
    return 0;
}

