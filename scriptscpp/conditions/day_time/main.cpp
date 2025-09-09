#include <iostream>
using namespace std;

int main() {
    int hour;
    cout << "Привіт, скажіть котра година?>- : ";
    cin >> hour;
    
    if (hour < 0) {
        cout << "Будь ласка, введіть правильну годину (з 4 до 12 ранок, з 12 до 17 день, з 17 до 23 вже вечір, потім ніч до 4 ранку!)." << endl;
    }
    else if (hour > 23) {
        cout << "Будь ласка, введіть правильну годину (з 4 до 12 ранок, з 12 до 17 день, з 17 до 23 вже вечір, потім ніч до 4 ранку!)." << endl;
    }
    else if (hour < 4) {
        cout << "Доброї ночі!" << endl;
    }
    else if (hour < 12) {
        cout << "Доброго ранку!" << endl;
    }
    else if (hour < 17) {
        cout << "Доброго дня!" << endl;
    }
    else {
        cout << "Доброго вечора!" << endl;
    }
    
    return 0;
}