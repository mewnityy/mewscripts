#include <iostream>

using namespace std;

int main() {
    cout << "Hello pls enter age of 3 brothers<-- ";
    
    int brat1, brat2, brat3;
    cin >> brat1 >> brat2 >> brat3;

    if (brat1 > brat2 && brat1 > brat3) {
        cout << "The first brother is the oldest!";
    } 
    else if (brat2 > brat1 && brat2 > brat3) {
        cout << "The second brother is the oldest!";
    } 
    else {
        cout << "The third brother is the oldest!";
    }

    return 0;
}