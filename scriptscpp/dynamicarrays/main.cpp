#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;


void fill(int* X, int sizemasiv)
{
    srand(time(0));
     for (int i = 0; i < sizemasiv; i++) {
        int r = rand() % 100;
        X[i] = r;
    }
}

void display(int* X, int sizemasiv) 
{
   for (int i = 0; i < sizemasiv; i++) {
        cout << X[i] << " ";
    }
    cout << endl;
}

int main()
{
    /*
    користувач вводить з клавіатури розмір масиву чисел.
    Програма створює такий масив заповнюючи випадковими значеннями(а таке можливо?)
    */
    
    // 1 Input size of masiv
    int sizemasiv;

    cout << "Введіть розмір масиву -----<: ";
    cin >> sizemasiv;
    
    
    // 2 Create masiv
    
    // int masiv[sizemasiv] = {0};
    
    int* A = new int[sizemasiv]{0};
    cout << "Array created!" << endl;
    
    // 3 Fill masiv 
    fill(A,sizemasiv);
    display(A,sizemasiv);
    
    // 4 Delete masiv (Free memory)
    
    delete[] A;
    cout << "Array deleted - memory free!" << endl;
    
    
    
    
    
    
    return 0;

}