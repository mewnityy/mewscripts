#include <iostream>

using namespace std;

//Calculfunctions ⬇️
int nsd(int x, int y) {
    int a = x;
    int b = y;
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a;
}
void reduce(int num, int den) {
    if (den < 0) {
        num = -num;
        den = -den;
    }

    if (num < 0) {
        num = -num;
    }

    int k = nsd(num, den);
    int a = num / k;
    int b = den / k;

    cout << num << "/" << den << " = " << a << "/" << b << endl;
}


void divide_fractions(int a, int b, int c, int d) {
    if (c == 0) {
        cout << "Sorry but you cant divide by 0...." << endl;
        return;
    }
    int num = a * d;
    int den = b * c;
    cout << " " << a << "/" << b << " / ";
    cout << c << "/" << d << " = ";
    reduce(num, den);
}




int main() {
    int ch1, zn1, ch2, zn2;
    //Input
    cout << "Enter numerator 1: ";
    cin >> ch1;
    cout << "Enter denominator 1: ";
    cin >> zn1;
    cout << "Enter numerator 2: ";
    cin >> ch2;
    cout << "Enter denominator 2: ";
    cin >> zn2;

    divide_fractions(ch1, zn1, ch2, zn2);

    return 0;
}
