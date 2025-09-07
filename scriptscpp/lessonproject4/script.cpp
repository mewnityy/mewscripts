#include <iostream>
#include "Lib1.h"
#include "Lib2.h"

using namespace std;

int main()
{
    // 1
    const int N = 30;
    int *A = create(N);
    display(A, N);

    // 2
    const int K = N + 3;
    int *B = resize(A, N, K);
    display(B, K);

    delete[] B;
    B = nullptr;
    // Fin
    cout << "\n Finish" << endl;
}