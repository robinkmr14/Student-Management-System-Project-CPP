#include "addData.cpp"
#include "displayData.cpp"
#include "searchData.cpp"
#include "deleteData.cpp"
#include "modifyData.cpp"
#include "result.cpp"

void admin()
{
    int option;
    int ch;
    do
    {

        system("cls");
        cout << "\n\t...............STUDENT MANAGEMENT SYSTEM..............";
        cout << "\n\t======================================================";

        cout << setw(30) << "\n\t0. Exit from Program\n";
        cout << setw(30) << "\n\t1. Write Data to File\n";
        cout << setw(30) << "\n\t2. Read Data From File\n";
        cout << setw(30) << "\n\t3. Search Data From File\n";
        cout << setw(30) << "\n\t4. Delete Data From File\n";
        cout << setw(30) << "\n\t5. Modify Data in File\n";
        cout << setw(30) << "\n\t6. View Result\n";
        cout << setw(30) << "\n\tEnter your choice  : ";
        cin >> ch;
        switch (ch)
        {
        case 0:
            exit(0);
            break;
        case 1:
            addData();
            break;
        case 2:
            displayData();
            break;
        case 3:
            searchData();
            break;
        case 4:
            deleteData();
            break;
        case 5:
            modifyData();
            break;
            break;
        case 6:
            viewResult();
            break;
        default:
            cout << "Invalid choice !!";
            break;
        }
        getch();
    } while (1);
}
