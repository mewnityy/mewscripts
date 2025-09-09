#include <iostream>

using namespace std;

bool check_number(int x) {
    bool trigger = true;
    for (int i = 2; i < x - 1; i++) {
        if (x % i == 0) {
            trigger = false;
            break;
        }
    }
    return trigger;
}

int main()
{
    int a = 1;
    int b = 100;
    
    for(int i = a; i<=b; i++)
    {
        if (check_number(i)) {
            cout << "  " << i;
        }       
    }
    

    return 0;
}