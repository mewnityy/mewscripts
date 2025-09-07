#include <iostream>
#include "zahal.h"

using namespace std;

void task1()
{
    cout << "\n=== TASK 1 ===\n";
    const int N = 15;
    int A[N];

    randomFill(A, N);
    cout << "Array:";
    display(A, N);

    int minElem = A[0], maxElem = A[0];
    int minIndex = 0, maxIndex = 0;

    for (int i = 1; i < N; i++)
    {
        if (A[i] < minElem)
        {
            minElem = A[i];
            minIndex = i;
        }
        if (A[i] > maxElem)
        {
            maxElem = A[i];
            maxIndex = i;
        }
    }

    cout << "Min element: " << minElem << " (index: " << minIndex << ")\n";
    cout << "Max element: " << maxElem << " (index: " << maxIndex << ")\n";
}
