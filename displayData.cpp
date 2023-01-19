#include "header.h"

void displayData()
{
     cout << "\n******************************** YOU ARE IN DISPLAY PAGE ********************************\n\n";
     cout << "=============================================================================================\n\n";
     int n, rollno, i, flag = 0;
     ifstream inf;
     student st;
     inf.open("student.dat", ios::binary);

     cout << setw(40) << "Enter the roll number which you want to display : ";
     cin >> rollno;
     if (!inf)
     {
          cout << "Unable to open file !!";
          exit(0);
     }
     while (inf.read(reinterpret_cast<char *>(&st), sizeof(student)))
     {
          if (st.rollno == rollno)
          {
               st.showData();

               // cout << "====================================================================================================================\n\n";
               // cout << left << setw(20) << "STUDENT NAME" << st.name << endl
               //      << setw(20) << "FATHER'S NAME" << st.Fname << endl;
               // cout << setw(20) << "MOTHER'S NAME" << st.Mname << endl
               //      << endl;
               // cout << "====================================================================================================================\n\n";

               // cout << setw(20) << "EOS" << st.marks[0] << endl
               //      << setw(20) << "CAAL" << st.marks[1] << endl;
               // cout << setw(20) << "OOPS" << st.marks[2] << endl
               //      << setw(20) << "DSA" << st.marks[3] << endl
               //      << setw(20) << "BE" << st.marks[4] << endl;
               // cout << "\n===================================================================================================================\n\n";
                flag = 1;
               break;
          }
     }
     if (!flag)
          cout << "Rollno doesn't exist !!" << endl;
     inf.close();
}
