#include "header.h"
#include "isexist.cpp"
void addData()
{
    system("cls");
    cout << "  ******************************** YOU ARE IN ADD STUDENT PAGE ********************************\n\n";
    cout << "=================================================================================================\n\n";
    char ch;
    ofstream fout;
    student s;
    fout.open("student.dat", ios::app | ios::binary);
    do
    {
        bool status;
        do
        {
            cout <<setw(30) << "\t\nEnter student Rollno : ";
            cin >> s.rollno;
            status = isexist(s.rollno);
            if (status == true)
            {
                cout <<setw(30) << "\t\nRoll number already exists in the database !!" << endl;
            }
        } while (status);

        cin.ignore();
        cout <<setw(30) << "\t\nEnter student name : ";
        cin.getline(s.name, 30);

        cout <<setw(30) << "\t\nEnter student Father's name : ";
        cin.getline(s.Fname, 30);

        cout <<setw(30) << "\t\nEnter student Mother's name : ";
        cin.getline(s.Mname, 30);
        cout <<setw(30) << "\t\nenter EOS marks : ";
        cin >> s.marks[0];
        cout <<setw(30) << "\t\nenter CAAL marks : ";
        cin >> s.marks[1];
        cout <<setw(30) << "\t\nenter OOPS marks : ";
        cin >> s.marks[2];
        cout <<setw(30) << "\t\nenter DSA marks : ";
        cin >> s.marks[3];
        cout <<setw(30) << "\t\nenter BE marks : ";
        cin >> s.marks[4];

        fout.write(reinterpret_cast<char *>(&s), sizeof(student));
        cout <<setw(30)<< "\t\nStudent record stored successfully in file." << endl;
        cout <<setw(30) << "\t\npress enter to input again !!" << endl;
        ch = getch();
    } while (ch == '\n');
    fout.close();
}