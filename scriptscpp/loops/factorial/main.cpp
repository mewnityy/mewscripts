#include <iostream>

using namespace std;

long long factorial(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

int main() {
    for (int i = 10; i <= 20; i++) {
        cout << i << "! = " << factorial(i) << endl;
    }
    return 0;
}
