#ifndef STUDENT
#define STUDENT

#include <iostream>
#include <fstream>
#include <cstring>
#include <conio.h>
#include <windows.h>
#include <iomanip>

using namespace std;
class student
{
public:
     char name[30];
     char Fname[30];
     char Mname[30];
     char Iname[30];
     int marks[10];
     char Sname[10][30];
     int rollno;

     void showData()
     {
          cout << "\n============================================================\n\n";
          cout << left << setw(15) << "STUDENT NAME  :" << name << setw(5)
               << "\t\tROLL NO : " << rollno << endl
               << setw(15) <<"\nFATHER'S NAME :" <<  Fname << endl <<endl;
          cout << setw(15) << "MOTHER'S NAME :" << Mname << endl;
          cout << "\n=============================================================\n\n";

          cout << setw(20) << "EOS" << marks[0] << endl <<endl
               << setw(20) << "CAAL" << marks[1] << endl <<endl;
          cout << setw(20) << "OOPS" << marks[2] << endl <<endl
               << setw(20) << "DSA" << marks[3] << endl <<endl
               << setw(20) << "BE" << marks[4] << endl;
          cout << "\n=============================================================\n\n";
     }
};
#endif