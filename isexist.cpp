#include "header.h"

bool isexist(int rollno)
{
    student ss;
    ifstream fin;
    int found = 0;
    fin.open("student.dat", ios::binary);

    if (!fin)
    {
        cout << "Unable to open file !!" << endl;
        exit(0);
    }

    while (fin.read(reinterpret_cast<char *>(&ss), sizeof(student)))
    {
        if (ss.rollno == rollno)
        {
            fin.close();
            return true;
        }
        fin.close();
        return false;
    }
}