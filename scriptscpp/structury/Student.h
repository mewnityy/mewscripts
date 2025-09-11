#pragma once
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Student
{
    string firstName;
    string lastName;
    int age;
    double rate;
    string phone;
};

void displayStudent(const Student& s) // константне посилання на об'єкт
{
    cout << setw(15) << s.firstName;
    cout << setw(15) << s.lastName;
    cout << setw(15) << s.age;
    cout << setw(15) << s.rate;
    cout << setw(15) << s.phone;
    cout << endl;
}