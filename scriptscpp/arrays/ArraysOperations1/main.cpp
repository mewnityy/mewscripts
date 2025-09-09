#include <iostream>
#include <ctime>

using namespace std;

void generate(int X[], int size, int a, int b) {
    for(int i = 0; i < size; i++) {
        X[i] = rand() % (b - a + 1) + a;
    }
}


void display(int X[], int size) {
    cout << endl;
    for(int i = 0; i < size; i++) {
        cout << "  " << X[i];
        
    }
}

int main()
{
    // 1. Random Numbers:
    srand(time(0));
    int a = 10;
    int b = 99;
    int x = rand() % (b - a + 1) + a;
    // cout << x << endl;
    
    
    
    // 2. Random Arrays:
    const int N = 25;
    int A[N] = {0};
    generate(A, N, a, b); 
    display(A, N);  
    
    
    // 3. Sum of elements: 
    int sumelem = 0;
    for(int i = 0; i < N; i++) {
        sumelem = sumelem + A[i];
    }
    cout << "\n Sum of all:  -> " << sumelem;
    
    // 4. Average of elements:
     double averageElems = (double)sumelem / N;
    cout << "\n Average of all:     -> " << averageElems;
    
        // 5. Max element:
    int maxNumberElem = A[0];
    int maxIndexElem = 0;

    for(int i = 1; i < N; i++) {
        if(A[i] > maxNumberElem) {
            maxNumberElem = A[i];
            maxIndexElem = i;
        }
    }

    cout << "\n  maxNumber of all numbers:  " << maxNumberElem << endl;
    cout << "  index of max element:   " << maxIndexElem << endl;

    
    // 6. Quantity of odd numbers:
    int oddCountE = 0;
    for(int i = 0; i < N; i++) {
        if (A[i] % 2 != 0) {
            oddCountE++;
        }
    }
    cout << "\n All odd numbers:  -> " << oddCountE;
    
    // 7Quantity of prime numbers:
   
    
    
    // Fin 
    cout << "\n \n> Finish";
    return 0;
}