#include <iostream>
#include <ctime>

using namespace std;

void display(int X[], int size) {
    for(int i = 0; i < size; i++) {
        cout << "  " << X[i];
    }
    cout << "\n";
}

void randomFill(int X[], int size) {
    srand(time(0));
    for(int i = 0; i < size; i++) {
        X[i] = rand() % 90 + 10;
    }
}

void bubbleSort(int X[], int size) {
    int buff;
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(X[j] > X[j + 1]) {
                buff = X[j];
                X[j] = X[j + 1];
                X[j + 1] = buff;
            }
        }
    }
}

void bubbleSort2(int X[], int size) {
    int buff;
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(X[j] < X[j + 1]) {
                buff = X[j];
                X[j] = X[j + 1];
                X[j + 1] = buff;
            }
        }
    }
}

void copyArray(int X[], int Y[], int size) {
    for(int i = 0; i < size; i++) {
        Y[i] = X[i];
    }
}

int main()  
{
    const int N = 20;

    int A[N] = {0};
    int B[N] = {0};
    int C[N] = {0};

    randomFill(A, N);
    display(A, N);

    copyArray(A, B, N);
    copyArray(A, C, N);

    bubbleSort(B, N);
    display(B, N);

    bubbleSort2(C, N);
    display(C, N);

    return 0;
}

