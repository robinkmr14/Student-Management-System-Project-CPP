#include "header.h"

void deleteData()
{
    system("cls");
    cout << "  ******************************** YOU ARE IN DELETE PAGE ********************************\n\n";
    cout << "=============================================================================================\n\n";
    student stud;
    fstream ob, ob1;
    ob.open("student.dat", ios::binary | ios::in | ios::out);
    ob1.open("temp.dat", ios::binary | ios::out);

    int rollno, flag = 0;

    cout << "Enter rollno which your want to delete : ";
    cin >> rollno;

    while (ob.read(reinterpret_cast<char *>(&stud), sizeof(student)))
    {
        if (stud.rollno == rollno)
        {
            cout << "The Following Roll No. " << rollno << " has been removed :\n";
            stud.showData();
            flag = 1;
        }
        else
        {
            ob1.write(reinterpret_cast<char *>(&stud), sizeof(student));
        }
    }
    ob1.close();
    ob.close();
    remove("student.dat");
    rename("temp.dat", "student.dat");

    if (!flag)
        cout << "The Roll No. " << rollno << " not found....\n\n";
}