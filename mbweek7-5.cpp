#include <iostream>

using namespace std;


bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
  
    int n;
    cout << "please enter the number: ";
    cin >> n;

	

    cout << "prime numbers smaller than " << n << ": ";
    for (int i = 2; i < n; ++i) {
        if (isPrime(i)) {
           cout << i << ": ";
        }
    }

   cout <<endl;

    return 0;
}

