#include "header.h"
void viewResult()
{
    student stt;
    int Rno, Total = 0;
    char Stuname[50];
    ifstream of;
    of.open("student.dat", ios::binary);
    cout << "Enter student Rollno to print result : ";
    cin >> Rno;
    cout << "\n\n              CH. CHARAN SINGH UNIVERSITY, MEERUT "<<endl;
    cout << "                     STATEMENT OF stt - EXAMINATION  "<<endl;
    cout << "\n                     \tClass / Course: BCA    "<<endl <<endl;
    

    while (of.read((char *)&stt, sizeof(student)))
    {
        if (stt.rollno == Rno)
        {
            cout << "  Name            : " << stt.name << "          Rollno no : " << stt.rollno << endl;
            cout << "  Father's Name   : " << stt.Fname <<"         Date    : 14 January 2023" << endl;
            cout << "  Mother's Name   : " << stt.Mname << endl;
            Total = stt.marks[0] + stt.marks[1] + stt.marks[2] + stt.marks[3] + stt.marks[4];
            cout << "|----------------------------------------------------------|\n";
            cout << "|      SUBJECTS               MARKS                        |\n";
            cout << "|----------------------------------------------------------|\n";
            cout << "|      EOS                    " << stt.marks[0]<<"\t\t\t   |"<<  endl;
            cout << "|      CAAL                   " << stt.marks[1]<<"\t\t\t   |"<<  endl;
            cout << "|      OOPS                   " << stt.marks[2]<<"\t\t\t   |"<<  endl;
            cout << "|      DSA                    " << stt.marks[3]<<"\t\t\t   |"<<  endl;
            cout << "|      BE                     " << stt.marks[4]<<"\t\t\t   |"<<  endl;
            cout << "|----------------------------------------------------------|\n";
            cout << "      TOTAL                  " << Total << endl;
        }
    }
    if (Total >= 175)
    {
        cout << "\n      RESULT    \n       PASS ";
    }
    else
    {
        cout << "      RESULT    \n    FAIL " <<endl;
    }
    cout << "\n-----------------------------------------------------------\n";
    of.close();
}