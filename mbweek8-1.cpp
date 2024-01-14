#include <iostream>

using namespace std;

int main() {
    const int size = 10; 

    int numbers[size];

  
    for (int i = 0; i < size; ++i) {
      cout << "please enter " << (i + 1) << " the number: ";
        cin >> numbers[i];
    }

 
  (numbers, numbers + size);

  
    int median;
    if (size % 2 == 0) {
     
        median = (numbers[size / 2 - 1] + numbers[size / 2]) / 2;
    } else {
        
        median = numbers[size / 2];
    }

  
  cout << "middle: " << median << std::endl;
    cout << "the smallest number: " << numbers[0] << endl;
  cout << "the largest number: " << numbers[size - 1] <<endl;

    return 0;
}

