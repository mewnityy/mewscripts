#pragma once

#include <iostream>

using namespace std;

int *resize(int *X, int size1, int size2)
{
    // 1 - create new masiv
    int *newArray = new int[size2]{0};
    // 2 - copy data
    for (int i = 0; i < size1; i++)
    {
        newArray[i] = X[i];
    }
    // 3 - delete old masiv
    delete[] X;

    // 4 return nowy adres masiv
    return newArray;
}