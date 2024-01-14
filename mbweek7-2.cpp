#include <iostream>

using namespace std;

int main() {
 
    int m, n;
    
   cout<<"please enter the first number	m: ";
    cin >> m;

   cout << "please enter the second number n: ";
    cin >> n;

  
    int remainder = n;
    while (remainder >= m) {
        remainder -= m;
    }
 
 
    cout << "left over n to m: " << remainder <<endl;
    cout << "out of the espisode n: " << n - remainder << endl;

    return 0;
}