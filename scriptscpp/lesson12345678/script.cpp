#include <iostream>
#include "FileFuncsLib.h"
#include "ArrayFuncsLib.h"

using namespace std;

int main()
{
    // 1
    cout << "------------------------" << endl;
    cout << "Files and DynArrays Demo" << endl;
    cout << "-------------------------" << endl;

    // 2
    const string file = "numbers.txt";
    int k = calcQuantity("numbers.txt");
    cout << "k = " << k << endl;
    int *numbers = readNumbers(k, file);
    displayArray(numbers, k);

    // 3
    int a = calcPositiveNumbers(numbers, k);
    cout << "\n a = " << a << endl;
    int *A = getPositiveNumbers(numbers, k, a);
    displayArray(A, a);
    writeArrayToFile("positive.txt", A, a);

    // 4
    int b = k - a;
    cout << "b = " << b << endl;
    int *B = getNegativeNumbers(numbers, k, b);
    displayArray(B, b);
    writeArrayToFile("negative.txt", B, b);

    // Fin :
    cout << "\n Finish";
    return 0;
}