#include <iostream>
using namespace std;

int main() {
    cout << "\n> Input a number of week day here<-- ";
    int n;
    cin >> n;

    switch(n) {
        case 1:
            cout << "MONDAY" << endl;
            break;
        case 2:
            cout << "TUESDAY" << endl;
            break;
        case 3:
            cout << "WEDNESDAY" << endl;
            break;
        case 4:
            cout << "THURSDAY" << endl;
            break;
        case 5:
            cout << "FRIDAY" << endl;
            break;
        case 6:
            cout << "SATURDAY" << endl;
            break;
        case 7:
            cout << "SUNDAY" << endl;
            break;
        default:
            cout << "Incorrect." << endl;
    }
    return 0;
}