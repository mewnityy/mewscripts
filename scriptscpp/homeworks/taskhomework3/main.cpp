#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "\t-------------------------------\n";
    cout << "\t  Distance Calculator ->------- (S = v*t + a*t^2/2)\n";
    cout << "\t-------------------------------\n";
    cout << "\t############################################################\n";

    double v, t, a;
    
    cout << "\n> Введіть швидкість V (м/с): ";
    cin >> v;
    
    cout << "> Введіть час t (с): ";
    cin >> t;
    
    cout << "> Введіть прискорення a (м/с^2): ";
    cin >> a;

    double S = v * t + (a * t * t) / 2.0;

    cout << "\n  Пройдена відстань S = " << S << " м\n";
    cout << "\n";
    
    
    return 0;
}
