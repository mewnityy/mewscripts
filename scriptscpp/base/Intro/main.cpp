#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout <<"\t###########";
    cout<<"\n\tHello World";
    cout <<"\n\t###########";
    
    int age = 14;
    string name = "Mewnity";
    
    cout << "\n> Person: " << name << endl;
    cout << "  Age: " << age << "years " << endl;
    
    cout << "\n> Input your name: ";
    string userName;
    cin >> userName;
    
    cout << "  Input your number: ";
    double x;
    cin >> x;
    
    cout << "  " << userName << ", your number is - " << x << endl;
    

    return 0;
}