#include <iostream>

using namespace std;

double CS(double sales) {
    double baza = 200;
    double com = 0;

    if (sales <= 500)
        com = sales * 0.03;
    else if (sales <= 1000)
        com = sales * 0.05;
    else
        com = sales * 0.08;

    return baza + com;
}

int main() {
    double sales1, sales2, sales3;
    
    cout << "Enter sales for manager 1: ";
    cin >> sales1;
    
    cout << "Enter sales for manager 2: ";
    cin >> sales2;
    
    cout << "Enter sales for manager 3: ";
    cin >> sales3;
    
    double salary1 = CS(sales1);
    double salary2 = CS(sales2);
    double salary3 = CS(sales3);

    double maximum = salary1;
    
    int bestManager = 1;

    if (salary2 > maximum) {
        maximum = salary2;
        bestManager = 2;
    }
    if (salary3 > maximum) {
        maximum = salary3;
        bestManager = 3;
    }

    maximum += 200;

    cout << "\nManager 1 salary: $" << salary1 << endl;
    cout << "Manager 2 salary: $" << salary2 << endl;
    cout << "Manager 3 salary: $" << salary3 << endl;
    
   cout << "\n==========================" << endl;
    cout << "  Best manager is manager " << bestManager << endl;
    cout << "  Total salary (!!!including bonus!!!): $" << maximum << endl;
    cout << "==========================" << endl;

    return 0;
}
