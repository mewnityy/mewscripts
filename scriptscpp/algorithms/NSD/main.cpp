#include <iostream>
using namespace std;

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
    int k = nsd(num, den);
    int a = num / k;
    int b = den / k;
    cout << num << "/" << den << " = " << a << "/" << b << endl;
}

void add_fractions(int a, int b, int c, int d) {
    int num = a * d + c * b;
    int den = b * d;
    cout << " " << a << "/" << b << " + ";
    cout << c << "/" << d << " = ";
    cout << num << "/" << den << endl;
}

int main() {
    int x, y;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;

    cout << "NSD: " << nsd(x, y) << endl;

    int ch, zn;
    cout << "Enter numerator: ";
    cin >> ch;
    cout << "Enter denominator: ";
    cin >> zn;

    reduce(ch, zn);

    int ch1, zn1, ch2, zn2;
    cout << "Enter numerator 1: ";
    cin >> ch1;
    cout << "Enter denominator 1: ";
    cin >> zn1;
    cout << "Enter numerator 2: ";
    cin >> ch2;
    cout << "Enter denominator 2: ";
    cin >> zn2;

    add_fractions(ch1, zn1, ch2, zn2);

    return 0;
}