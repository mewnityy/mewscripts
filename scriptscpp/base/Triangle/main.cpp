#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout<<"\t--------------------------\n ";
    cout<<"\tTriangle Square Calculator\n ";
    cout<<"\t--------------------------\n ";
    
    // 1 - Input:
    cout << "\n> Input triangle size length: ";
    double a, b, c;
    cin >> a >> b >> c;
    
    //2 - Calc:
    if(a < b + c && b < a + c && c < a + b)
    {
        double p = (a + b + c) / 2;
        double s = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << "  S = " << s << endl;
    }
    else 
    {
        cout << " Such triangle not exists\n";
    }
    
    
    //Fin:
    return 0;
}