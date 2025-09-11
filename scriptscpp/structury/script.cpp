#include <iostream>
#include "Student.h"

using namespace std;

int main()
{
    // 1
    cout << "DeanOffice ... " << endl;

    // 2
    Student s1 = {"Petro", "Petrenko", 25, 7.5, "111-11-11"};
    Student s2 = {"Kirill", "Zeleikin", 16, 9.3, "111-11-11"};
    Student s3 = {"Volodymyr", "Shevchenko", 14, 7.8, "111-11-11"};

    // 3
    Student g[3] = {s1, s2, s3};
    for (int i = 0; i < 3; i++)
    {
        // cout << g[i].lastName << endl;
        displayStudent(g[i]);
    }

    // Fin:
    cout << "\n\t Finish";
}