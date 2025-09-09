#include <iostream>

#include <cmath>

using namespace std;

int main()
{
     cout << "\t--------------------------\n";
    cout << "\t   Circle Area Calculator\n";
    cout << "\t--------------------------\n";
    cout << "\t################################################################################################\n";
    
    // 1 --- Input:
    cout << "\n> Input circle length right here pls---->: ";
    
    double L;
    cin >> L;
    
    // 2 ---- Calculation:
    double pi = 3.14;
    
    double R = L / (2 * pi);
    
    double S = pi * R * R;
    
    cout << "  Radius R = " << R << endl;
    cout << "  Area S = " << S << endl;

    cout << "\n";
}
