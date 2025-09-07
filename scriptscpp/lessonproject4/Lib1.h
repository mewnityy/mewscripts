#pragma once

#include <iostream>
using namespace std;

// Функція для створення динамічного масиву заданого розміру:
int *create(int size)
{
    int *p = new int[size];
    return p;
}

// Функція для заповнення заданого масиву рандомними числами:
// ....
// Функція для виведення елементів динамічного масиву на екран:
void display(int *X, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "  " << X[i];
    }
    cout << endl;
}
