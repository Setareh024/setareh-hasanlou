#include <iostream>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
 
    int m, n;
  
  cout << "please enter the first number: ";
    cin >> m;

    cout << "please enter the second number: ";
   cin >>n;

 
    int result = gcd(m, n);

   
   cout << "the largest divisor of b.m.m " << m << "and " << n << " equal to: " << result <<endl;

    return 0;
}

