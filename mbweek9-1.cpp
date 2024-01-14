
#include <iostream>
#include <algorithm> 
using namespace std;


int main() {

    const int arraySize = 10;
    int myarray[arraySize];

 
    std::cout <<"please provide values for array:" <<endl;
    for (int i = 0; i < arraySize; ++i) {
       cout << "element " << i + 1 << ": ";
       cin >> myarray[i];
    }

   sort(myarray, myarray + arraySize);

    int insertedNumber ;
  cout << "please enter anumber to insert in array: ";
cin >> insertedNumber;

  auto insertionPoint =std::upper_bound(myarray, myarray + arraySize, insertedNumber);

    myarray[std::distance(myarray, insertionPoint)] = insertedNumber;

   

  cout << "the values entered in array(steady rise by inserting the number) :" << endl;
    for (int i = 0; i < arraySize; ++i) {
       cout << myarray[i] << " ";
    }
   cout << endl;

    return 0;
}
