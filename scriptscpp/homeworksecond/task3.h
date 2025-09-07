#include <iostream>

using namespace std;

void task3()
{
    cout << "\n=== TASK 3 ===\n";
    const int N = 10;
    double A[N];

    cout << "Enter " << N << " diysni numbers:\n";
    for (int i = 0; i < N; i++)
    {
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }

    cout << "Array:";
    for (int i = 0; i < N; i++)
    {
        cout << " " << A[i];
    }
    cout << "\n";

    double sumNegative = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] < 0)
        {
            sumNegative += A[i];
        }
    }
    cout << "Sum of negative elements: " << sumNegative << "\n";

    double minElem = A[0];
    double maxElem = A[0];
    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 1; i < N; i++)
    {
        if (A[i] < minElem)
        {
            minElem = A[i];
            minIndex = i;
        }
        else
        {
            if (A[i] > maxElem)
            {
                maxElem = A[i];
                maxIndex = i;
            }
        }
    }

    if (minIndex > maxIndex)
    {
        int temp = minIndex;
        minIndex = maxIndex;
        maxIndex = temp;
    }

    double productBetween = 1;
    bool hasElements = false;
    for (int i = minIndex + 1; i < maxIndex; i++)
    {
        productBetween *= A[i];
        hasElements = true;
    }

    if (hasElements)
    {
        cout << "Product between min and max: " << productBetween << "\n";
    }
    else
    {
        cout << "No elements between min and max\n";
    }

    double productParne = 1;
    for (int i = 0; i < N; i += 2)
    {
        productParne *= A[i];
    }
    cout << "Product of parne-indexovani elements: " << productParne << "\n";

    int firstNegative = -1;
    int lastNegative = -1;

    for (int i = 0; i < N; i++)
    {
        if (A[i] < 0)
        {
            firstNegative = i;
            break;
        }
    }

    for (int i = N - 1; i >= 0; i--)
    {
        if (A[i] < 0)
        {
            lastNegative = i;
            break;
        }
    }

    bool foundTwoNegatives = (firstNegative != -1) && (lastNegative != -1);
    bool inCorrectOrder = (firstNegative < lastNegative);

    if (foundTwoNegatives && inCorrectOrder)
    {
        double sumBetweenNegative = 0;
        for (int i = firstNegative + 1; i < lastNegative; i++)
        {
            sumBetweenNegative += A[i];
        }
        cout << "Sum between first and last negative number: " << sumBetweenNegative << "\n";
    }
    else
    {
        cout << "Not enough negative elems or not correct order or no any negative elems\n";
    }
}
