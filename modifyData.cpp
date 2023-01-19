#include "header.h"

void modifyData()
{
    cout << "  ******************************** YOU ARE IN MODIFY PAGE ********************************\n\n";
    cout << "============================================================================================\n\n";
    student stu;
    system("cls");
    fstream fio;
    fio.open("student.dat", ios::binary | ios::in | ios::out);
    cout << "MODIFY STUDENT DATA" << endl;
    int rollno, choice, flag = 0;
    cout << endl
         << "Enter student rollno which you want to modify  : ";
    cin >> rollno;

    if (!fio)
    {
        cout << "Unable to open file !!" << endl;
        exit(0);
    }
    while (fio.read(reinterpret_cast<char *>(&stu), sizeof(student)))
    {

        if (stu.rollno == rollno)
        {
            cout << "The Following Roll No. " << rollno << " will be modified with new data:\n";
            cout << endl;
            cout << left << setw(30) << stu.name << setw(20) << stu.Fname << setw(20) << stu.Mname;
            cout << setw(20) << stu.marks[0] << setw(20) << stu.marks[1] << setw(20) << stu.marks[2] << setw(20) << stu.marks[3] << setw(20) << stu.marks[4] << endl;

            cout << "========= Modify student details =========" << endl;

            cin.ignore();
            cout << "Enter student name : ";
            cin.getline(stu.name, 30);

            cout << "Enter student Father's name : ";
            cin.getline(stu.Fname, 30);

            cout << "Enter student Mother's name : ";
            cin.getline(stu.Mname, 30);
            cout << "enter EOS marks : ";
            cin >> stu.marks[0];
            cout << "enter CAAL marks : ";
            cin >> stu.marks[1];
            cout << "enter OOPS marks : ";
            cin >> stu.marks[2];
            cout << "enter DSA marks : ";
            cin >> stu.marks[3];
            cout << "enter BE marks : ";
            cin >> stu.marks[4];

            fio.seekp(fio.tellp() - sizeof(student));
            fio.write((char *)&stu, sizeof(student));
            flag = 1;
        }
    }
    fio.close();
    if (!flag)
        cout << "The Roll No. " << rollno << " not found....\n\n";
    else
        cout << "Data modified successfully.\n ";
}