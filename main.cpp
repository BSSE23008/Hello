#include "functions.h"

int main()
{
    string studentsFile = "students.txt"; 

    int x = 1; 
    do { 
        cout << "\n======================================\n"
            << "0) Exit\n"
            << "1) Add New Student\n"
            << "2) Display All Students\n"
            << "Enter: ";
        cin >> x; 

        switch (x) { 
            case 0: { 
                cout << "See you soon!" << endl; 
                break; 
            }
            case 1: { 
                addStudent (studentsFile); 
                break; 
            }

              // This is my work











              //
            //case 2: {    }
                 case 2: {
                Student* students = readFile (studentsFile); 
                displayStudents (students, count(studentsFile));
                delete students; 
                break; 
            }
            default: { 
                cout << "\nInvalid choice\n";
                break;
            }
        }
    } while (x != 0); 
    return 0;
}