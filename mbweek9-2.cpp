 #include <iostream>

using namespace std;
 
 findSecondSmallest(int arr[], int n) {
    if (n < 2) {
    cout << "array has at least two elements" << endl;
   return ;
    }

    int smallest = INT_MAX;
    int second_smallest = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < second_smallest && arr[i] != smallest) {
            second_smallest = arr[i];
        }
    }

    if (second_smallest == INT_MAX) {
       cout << "in the array all the elements are the same" << endl;
    } else {
        cout << "the second small element in the array: " << second_smallest <<endl;
    }
}

int main() {
    int myarray[] = {12, 4, 7, 1, 9, 15, 6};
    int size = sizeof(myarray) / sizeof(myarray[0]);

    findSecondSmallest(myarray, size);

    return 0;
}

