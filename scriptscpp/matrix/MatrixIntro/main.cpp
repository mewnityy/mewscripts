#include <iostream>

using namespace std;

void display5(int X[][5], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 5; j++) {
            cout << X[i][j] << "  ";
        }
        cout << "\n";
    }
}

int main()
{
    // 1 
    const int rows = 5;
    const int cols = 5;
    int M[rows][cols] = {0};
    display5(M, rows);
    // 2 
    cout << "\n";
    int Q[rows][cols] = {
        {11, 12, 13, 14, 15},
        {21, 22, 23, 24, 25},
        {31, 32, 33, 34, 35},
        {41, 42, 43, 44, 45},
        {51, 52, 53, 54, 55}
    };
    display5(Q, rows);
    
    // 3 
    int s = 0;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(i == j) {
                s+= Q[i][i];
            }
        }
    }
    cout << "\n s = " << s;
    
    
    

    return 0;
}