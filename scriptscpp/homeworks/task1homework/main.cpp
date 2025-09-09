#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Завдання 1 
    
    cout << "\t--------------------------\n";
    cout << "\t    Resistence Calculator\n";
    cout << "\t--------------------------\n";
    cout << "\t##############################################################################################\n";
    
    // 1. ---------------- Input:
    cout << "\n> Input R1: ";
    double R1, R2, R3;
    cin >> R1;
    
    cout << "  Input R2: ";
    cin >> R2;
    
    cout << "  Input R3: ";
    cin >> R3;
    
    // 2.  ------------ Calculationformul:
    double R0 = 1.0 / (1.0/R1 + 1.0/R2 + 1.0/R3);
    cout << "  R0 = " << R0 << endl;
    
    cout << "\n";
}
