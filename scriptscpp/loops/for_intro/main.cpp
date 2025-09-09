#include <iostream>

using namespace std;

int main()
{
    // 1
    const int N = 10;
    
    for(int i = 0; i<=N; i++) {
    cout << "  " << i;
    }
    
    cout << endl;
    
      // 2
    
    for(int i = 20; i<= 10; i++) {
    cout << "  " << i;
    }

    cout << endl;
    // 3
    
    for(int i = 20; i >= 10; i--) {
    cout << "  " << i;
    }
    
     cout << endl;
    // 4
    
    for(int i = 20; i >= 10; i-= 2) {
    cout << "  " << i;
    }
    
    cout << endl;
    
     // 5
    
    for(int i = 20; i >= 10; i--) {
        if(i % 2 != 0) {
            cout << "  " << i;
        }
    }
    

    return 0;
}