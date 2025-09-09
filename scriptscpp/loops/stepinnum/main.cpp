#include <iostream>

using namespace std;

long long power(int a, int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= a;
    }
    return result;
}

int main() {
    for (int i = 10; i <= 20; i++) {
        cout << "2 ^ " << i << " = " << power(2, i) << endl;
    }
    return 0;
}
