#include <iostream>

int main()
{
    // 1
    cout << "\n> How old are you? - ";
    int age;
    cin >> age;
    
    if (age <= 12)
    {
        cout << "  You are a child!";
    }
    else if(age <= 19) {
        cout << "  You are a teenager!";
    }
    else if(age <= 30) {
        cout << "  You are young person!";
    }
    else if(age <= 50) {
        cout << "  You are adult!";
    }
    else {
        cout << "  You are old!";
    }

    return 0;
}