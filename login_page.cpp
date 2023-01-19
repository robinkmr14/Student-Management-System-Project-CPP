#include "project.cpp"

void login()
{

    int choice;
    char ch;
    do
    {
        system("cls");
        cout << endl;
        cout << "                              WELCOME TO OUR LOGINc PAGE !!                                      \n\n";
        cout << "                    <<=============================================>>                          \n\n\n";
        cout << "                   **************************************************                            \n\n";
        cout << "                                       1.LOGIN                                                   \n\n";
        cout << "                                       2.EXIT                                                    \n\n";
        cout << "                   **************************************************                            \n\n";
        cout << setw(50) << "[1] for LOGIN   [2] EXIT :";
        cin >> choice;

        switch (choice)
        {
        case 1:
            {
                char username[10], password[9];
                int attempt = 0;
                do
                {
                    system("cls");
                    cout << setw(50) << "Enter Username :";
                    cin >> username;

                    cout << setw(50) << "Enter password :";

                    for (int i = 0; i < 8; i++)
                    {
                        password[i] = getch();
                        cout << "*";
                    }
                    password[8] = '\0';
                    if ((strcmp(username, "robin") == 0) && (strcmp(password, "12345678") == 0))
                    {
                        cout << endl
                             << setw(60) << "You are successfully login." << endl;
                        admin();
                        break;
                    }

                    cout << setw(60) << endl
                         << "Invalid Username and Password !!" << endl;
                    cout << setw(60) << endl
                         << "Press any key to continue....";
                    getch();
                    attempt++;

                } while (attempt != 3);
            }

            break;

        case 2:
            exit(0);
            break;

        default:
            cout << setw(40) << "Wrong choice !!";
            break;
        }
        cout << setw(40) << "PRESS ENTER TO CONTINUE....";
        getch();
    } while (1);
}
