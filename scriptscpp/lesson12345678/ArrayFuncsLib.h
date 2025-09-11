#pragma once

#include <iostream>
#include <string>

using namespace std;

void displayArray(int *X, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "  " << X[i];
    }
    cout << endl;
}

int calcPositiveNumbers(int *X, int size)
{
    int w = 0;
    for (int i = 0; i < size; i++)
    {
        if (X[i] >= 0)
        {
            w++;
        }
        cout << "  " << X[i];
    }
    return w;
}

int *getPositiveNumbers(int *X, int size, int k)
{
    int *Y = new int[k]; // masiv positiviv
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (X[i] >= 0)
        {
            Y[j] = X[i];
            j++;
        }
    }
    return Y;
}
int *getNegativeNumbers(int *X, int size, int k)
{
    int *Y = new int[k]; // masiv negativiv
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (X[i] <= 0)
        {
            Y[j] = X[i];
            j++;
        }
    }
    return Y;
}
