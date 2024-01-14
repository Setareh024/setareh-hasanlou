#include <iostream>

using namespace std;

int main() {

    int n;
   cout << "please enter the number n: ";
     cin >> n;


    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            sum += i;
        }
    }

    std::cout << "the sum of all the divisors of a number " << n << " equal to: " << sum << endl;

    return 0;
}
