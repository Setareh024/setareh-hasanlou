#include <iostream>

using namespace std;

int main(){

    int m, n;

    cout << "please enter the correct and positive number m: ";
    cin >> m;

    cout <<"please enter the correct and positive number n: ";
    cin >> n;

    int result = 1;
    for (int i = 0; i < n; ++i) {
        result *= m;
    }

    std::cout <<m<< " to the power of " << n<< " equal to " << result << " is" << endl;

    return 0;
}

    