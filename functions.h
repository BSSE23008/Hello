#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_
#include <iostream> 
#include <string> 
#include <fstream> 
#include <sstream> 
using namespace std; 


struct Student { 
    string name, regNo; 
    int age; 

    Student (string _name = "NA", string _regNo = "NA", int _age = 0) 
    : name (_name), regNo(_regNo), age(_age) { 

    } 
}; 

void addStudent (string& file_name); 
Student* readFile (string& file_name); 
void writeFile (string& file_name); 
int count (string& file_name);
void displayStudents (Student* students, int n);

#endif // _FUNCTIONS_H_ 