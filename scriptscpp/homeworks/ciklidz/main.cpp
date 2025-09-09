#include <iostream>

using namespace std;

int main() {
    // Task 1:
    int a;
    cout << "Enter a: ";
    cin >> a;

    int sum = 0;
    for (int i = a; i <= 500; i++) {
        sum += i;
    }
    cout << "Sum from " << a << " to 500 is " << sum << endl;



    // Task 2:
    int x, y;
    cout << "\nEnter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;

    int result = 1;
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    cout << x << "^" << y << " = " << result << endl;



    // Task 3:
    int sum3 = 0;
    for (int i = 1; i <= 1000; i++) {
        sum3 += i;
    }
    double average = sum3 / 1000.0;
    cout << "\n Average from 1 to 1000 = " << average << endl;



    // Task 4:
    int a4;
    cout << "\nEnter a (1 <= a <= 20): ";
    cin >> a4;

    if (a4 >= 1 && a4 <= 20) {
        long long product = 1;
        for (int i = a4; i <= 20; i++) {
            product *= i;
        }
        cout << "Product from " << a4 << " to 20 is " << product << endl;
    } else {
        cout << "incorrectinput. a must be between 1 and 20 :(." << endl;
    }



    // Task 5:
   int k;
   cout << "\nEnter numer: ";
   cin >> k;

   cout << "\nMultipliction table for " << k << ":" << endl;
    for (int i = 2; i <= 9; i++) {
        cout << k << " x " << i << " = " << k * i << endl;
}
}
