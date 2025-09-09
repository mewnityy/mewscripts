#include <iostream>
#include <string>

using namespace std;

void displayIntArray(int X[], int size) {
    cout << endl;
    for(int i = 0; i < size; i++) {
        cout << X[i] << "  ";
    }
    
}

void displayCharArray(char X[], int size) {
    cout << endl;
    for(int i = 0; i < size; i++) {
        cout << X[i] << "  ";
    }
    
}

void displayDoubleArray(double X[], int size) {
    cout << endl;
    for(int i = 0; i < size; i++) {
        cout << X[i] << "  ";
    }
    
}

void displayStringArray(string X[], int size) {
    cout << endl;
    for(int i = 0; i < size; i++) {
        cout << X[i] << "  ";
    }
    
}

int main()
{
    // 1
    int a = 15;
    int b = 37;
    int c = 11;
    int d = 45;
    int e = 29;
    
    // 2 
    
    int A[] = {15, 37, 11, 45, 29};
    
    /*
       Масив це впорядкований набір однотипних даних.
    
    */
    
    cout << A[4] << endl;
    cout << A[0] << endl;
    displayIntArray(A, 5);
    
    // 3 
    const int N = 10;
    int B[N] = {0};
    displayIntArray(B, N);
    
    // 4 
    char C[N] = {'H','E','L','L','O'};
    double D[N] = {3.14, 2.73, 4.15, 1.33, 7.68};
    string E [N] = {"Hello", "Brothers", "and", "Sisters" };
    
    displayIntArray(B, N);
    displayCharArray(C, N);
    displayDoubleArray(D, N);
    displayStringArray(E, N);
    
    
    //5 
    
    D[2] = 777;
    displayDoubleArray(D, N);
    

    return 0;
}