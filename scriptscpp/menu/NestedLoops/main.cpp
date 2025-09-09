#include <iostream>
#include "Menu.h"
#include "Demo.h"

using namespace std;

int main()
{
    bool stop = false;
    do {
        displayMenu();
        switch (ChooseOption()) {
        case 1:
            pifagorDemo();
            break;
        case 2:
            quadraticTable();
            break;
        case 3:
            triangleTable();
            break;
        case 4:
            break;
        case 5:
            stop = true;
            break;
        default:
            cout << " Such option not exists" << endl;
        }
        // ->
        if(stop) {
            break;
        }
    }
    while (allowContinue());
    
    cout << "\n Finish" << endl;
    return 0;
}