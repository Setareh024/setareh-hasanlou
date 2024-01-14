#include <iostream>

using namespace std;


int main() {
  
    int a[5];
    int b[5];


    cout << "Enter 5 integers for array a:" << endl;
    for (int i = 0; i < 5; ++i) {
       cout << "Enter value for a[" << i << "]: ";
       cin >> a[i];
    }


    cout << "Enter 5 integers for array b:" <<endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Enter value for b[" << i << "]: ";
        cin >> b[i];
    }


   cout << "Initial values of arrays:" << endl;
   cout << "Array a: ";
    for (int i = 0; i < 5; ++i) {
        cout << a[i] << " ";
    }
   cout << endl;

    cout << "Array b: ";
    for (int i = 0; i < 5; ++i) {
       cout << b[i] << " ";
    }
    cout <<endl;

    for (int i = 0; i < 5; ++i) {
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }

   
    cout << "Final values of arrays after swapping:" << endl;
    cout << "Array a: ";
    for (int i = 0; i < 5; ++i) {
      cout << a[i] << " ";
    }
   cout << endl;

   cout << "Array b: ";
    for (int i = 0; i < 5; ++i) {
        cout << b[i] << " ";
    }
   cout << endl;

    return 0;
}

