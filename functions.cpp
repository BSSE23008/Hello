#include "functions.h"

// COunting number of students
int count (string& file_name) 
{ 
    ifstream read (file_name, std::ios::in); 
    if (!read.is_open()) { 
        cout << "\nCould not open the file: " << file_name << "\n"; 
        return -1; 
    }

    int i = 0;
    string line;  
    while (!read.eof()) {
        getline(read, line);  
        i++; 
    }
    read.close(); 
    return i-1; 
}


void addStudent (string& file_name) 
{ 
    string name, regNo; 
    int age; 
    // Taking input for the student 
    cout << "Enter student name  : "; cin.ignore(); getline (cin, name); 
    cout << "Enter student regNo : "; cin >> regNo; 
    cout << "Enter student age   : "; cin >> age;  

    ofstream off (file_name, std::ios::app); 
    if (off.is_open()) {
        off << name << " , " << regNo << " , " << age << endl;
    }
    off.close(); 
}




Student* readFile (string& file_name) { 
    ifstream read (file_name, std::ios::in); 
    if (!read.is_open()) { 
        cout << "\nCould not open the file: " << file_name << "\n"; 
        return nullptr; 
    }

    int n = count (file_name); 
    cout << "\nNumber of students in the class: " << n << endl; 
    Student* students = new Student[n]; 
    string str;

    int i=0; 
    while (i<n && !read.eof()) { 
        read >> students[i].name; 
        read >> str;
        read >> students[i].regNo; 
        read >> str;
        read >> students[i].age;  
        i++; 
    }
    read.close();
    return students; 
}

void writeFile (string& file_name) { 

}

void displayStudents (Student* students, int n) { 

    for (int i=0; i<n; ++i) { 
        cout << students[i].name << " "
            << students[i].regNo << " "
            << students[i].age 
            << endl;
    }
}