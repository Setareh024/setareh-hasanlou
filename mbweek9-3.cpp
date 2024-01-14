#include <iostream>

using namespace std;

 generateFibonacci(int arr[], int n) {
    arr[0] = 0;
    arr[1] = 1;
    
    for (int i = 2; i < n; i++) {
       arr[i] = arr[i - 1] + arr[i - 2];}
    return n;
}
int main() {
    const int n = 10; 
    int fibonacciArray[n];

    generateFibonacci(fibonacciArray, n);

   cout << "the first ten numbers of the fibonacci series: ";
    for (int i = 0; i < n; i++) {
       cout << fibonacciArray[i] << " ";
    }
    cout << endl;

    return 0;
}
