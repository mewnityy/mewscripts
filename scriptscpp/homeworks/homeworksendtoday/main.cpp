#include <iostream>

using namespace std;

bool vysokisniy(int rik) {
    if ((rik % 4 == 0 && rik % 100 != 0) || (rik % 400 == 0))
        return true;
    else
        return false;
}

int dniVMonth(int month, int rik) {
    if (month == 2) {
        if (vysokisniy(rik)) return 29;
        else return 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else
        return 31;
}

// Calculating
int kilkistDniv(int den, int month, int rik) {
    int d = den;

    for (int m = 1; m < month; m++)
        d += dniVMonth(m, rik);

    for (int r = 1; r < rik; r++) {
        if (vysokisniy(r)) d += 366;
        else d += 365;
    }

    return d;
}

int main() {
    int d1, month1, y1;
    int d2, month2, y2;

    cout << "Enter first date (day month year): ";
    cin >> d1 >> month1 >> y1;
    cout << "Enter second date (day month year): ";
    cin >> d2 >> month2 >> y2;

    int day1 = kilkistDniv(d1, month1, y1);
    int day2 = kilkistDniv(d2, month2, y2);

    if (day1 > day2)
        cout << "Days difference: " << day1 - day2 << endl;
    else
        cout << "Days difference: " << day2 - day1 << endl;

    return 0;
}
