#include <iostream>
using namespace std;

int main()
{
   // 1 - input
   int x;
   cout << "\n> Input natural number: ";
   cin >> x;
   
   // 2 - calc
   int a = x;
   int k = 0;
   int s = 0;
   while (a > 0) {
       s += a % 10;
       a /= 10;
       k++;
   }

   // 3 - result
   cout << " Quantity digits in " << x << " is - " << k << endl;
   cout << " Sum of digits in " << x << " is - " << s << endl;

   return 0;
}
