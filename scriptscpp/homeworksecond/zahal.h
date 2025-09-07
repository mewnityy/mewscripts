#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void display(int X[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << " " << X[i];
    }
    cout << "\n";
}

void randomFill(int X[], int size)
{
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        X[i] = rand() % 201 - 100;
    }
}
