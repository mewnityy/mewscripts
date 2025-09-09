#include <iostream>
#include <iomanip>

using namespace std;

void showMatrixMagicFunc()
{
    const int size = 5;
    int matrix[size][size];
    int sumAll = 0;
    int sumDiagonal = 0;

    cout << "\t\n"
         << "==============================================" << endl;
    cout << "\t\n"
         << "                Hello user!" << endl;
    cout << "\t\n"
         << "==============================================" << endl;

    // Fill matrix
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            matrix[i][j] = j + 1;

    // Print matrix
    cout << "Matrix 5x5:\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            cout << setw(4) << matrix[i][j];
        cout << "\n";
    }

    // Sum of all elements
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            sumAll += matrix[i][j];

    cout << "\nSum: " << sumAll << "\n";

    // Sum of main diagonal
    for (int i = 0; i < size; i++)
        sumDiagonal += matrix[i][i];

    cout << "Diagonal sum: " << sumDiagonal << "\n";

    // Print diamond(romb)
    cout << "\nDiamond(romb):\n";
    for (int i = 0; i < size; i++)
    {
        for (int s = 0; s < size - i - 1; s++)
            cout << "  ";
        for (int j = 0; j <= i; j++)
            cout << setw(4) << matrix[i][j];
        cout << "\n";
    }
    for (int i = size - 2; i >= 0; i--)
    {
        for (int s = 0; s < size - i - 1; s++)
            cout << "  ";
        for (int j = 0; j <= i; j++)
            cout << setw(4) << matrix[i][j];
        cout << "\n";
    }

    cout << "\t\n"
         << "==============================================" << endl;
    cout << "\t\n"
         << "                Goodbye user!" << endl;
    cout << "\t\n"
         << "==============================================" << endl;
}

int main()
{
    showMatrixMagicFunc();
    return 0;
}
