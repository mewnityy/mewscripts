#include <iostream>

using namespace std;

int main()
{
    // 1 
    int a = 123;
    cout << "a = " << a << endl;
    int* p1 = &a;
    cout << "adress(a) = " << &p1 << endl;
    
    // 2
    int b = 456;
     int* p2 = &b;
    cout << "b = " << b << endl;
    cout << "adress(b) = " << &p2 << endl;
    
    // 3
    long long x = 1234567;
    cout << "x = " << x << endl;
    cout << "adress(x) = " << &x << endl;
    
    // 4
    long long y = 12345678;
    cout << "y = " << y << endl;
    cout << "adress(y) = " << &y << endl;
    
    // 5 
    cout << "p1 = " << p1 << endl;
    cout << "p2 = " << p2 << endl;
    
    cout << "value1: " << *p1 << endl; // Розіменування 1 вказавника
    cout << "value2: " << *p2 << endl; // Розіменування 2 вказавника
    
    //6 
    *p1 = 555;
    *p2 = 777;
    
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}