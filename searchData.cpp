#include "header.h"

void searchData()
{
    cout << "  ******************************** YOU ARE IN SEARCH PAGE ********************************\n\n";
    cout << "============================================================================================\n\n";
    student stude;
    int rollno, flag = 0;
    ifstream fin;
    fin.open("student.dat", ios::binary);

    cout << "Enter Roll Number you want to search : ";
    cin >> rollno;

    while (fin.read(reinterpret_cast<char *>(&stude), sizeof(student)))
    {
        if (rollno == stude.rollno)
        {
            cout << "The Details of Roll No. " << rollno << " shown here with:\n";
            stude.showData();
            flag = 1;
        }
    }
    fin.close();
    if (!flag)
        cout << "The Roll No. " << rollno << " not found....\n\n";
    else
        cout << "\n\nData Reading from File Successfully Done....\n";
}
