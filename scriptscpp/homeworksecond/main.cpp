#include <iostream>

#include "task1.h"
#include "task2.h"
#include "task3.h"

using namespace std;

int main()
{
    int choice;

    do
    {
        cout << "\n=== MENU_123 ===\n";
        cout << "1. Task 1\n";
        cout << "2. Task 2\n";
        cout << "3. Task 3\n";
        cout << "0. Exit from our program :)\n";
        cout << "Your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 3:
            task3();
            break;
        case 0:
            cout << "Goodbye user!\n";
            break;
        default:
            cout << "Sorry.Invalid choice.\n";
        }
    } while (choice != 0);

    return 0;
}
