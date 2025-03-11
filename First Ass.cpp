#include <iostream>
#include <climits> 

using namespace std;

int findSmallestNumber(int arr[], int size) {
    if (size == 0) {
        return -1;
    }
    
    int min_value = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min_value) {
            min_value = arr[i]; 
        }
    }

    return min_value;
}

int main() {
    int arr[] = {-43, 23, 87, 23, 5}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    int smallest = findSmallestNumber(arr, size);
    
    if (smallest != -1) {
        cout << "The smallest number in the array is: " << smallest << endl;
    } else {
        cout << "The array is empty." << endl;
    }

    return 0;
}
