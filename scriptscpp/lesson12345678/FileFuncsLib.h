#pragma once

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int calcQuantity(string fileName)

{
    ifstream fin; // fin is a name; ifstream potok input; ofscream potok output
    fin.open(fileName);
    int x = 0;
    int q = 0; // quantity---numers

    while (!fin.eof()) // while file didnt come to end
    {
        // зчитуємо кожне слово-число; лічильник++
        fin >> x;
        q++;
    }
    fin.close();
    return q;
}

int *readNumbers(int count, string fileName)
{
    int *A = new int[count]{0};

    ifstream fin;
    fin.open(fileName);

    for (int i = 0; i < count; i++)
    {
        fin >> A[i];
    }
    fin.close();
    return A;
}

void writeArrayToFile(string fileName, int *X, int size)
{
    ofstream fout;
    fout.open(fileName);

    for (int i = 0; i < size; i++)
    {
        fout << "     " << X[i] << "\n"
             << " ";
    }

    fout.close();
}
