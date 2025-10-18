// remove occurence of all the same elements in array

#include <iostream>
using namespace std;

int removeElement(int* arr, int val, int size) {
    int newSize = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] != val) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    return newSize;
}

int main() {
    int size = 5;
    int arr[5] = {1,1,2,2,3};
    int val = 1;

    cout << "Original array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }


    int newSize = removeElement(arr, val, size);

    cout << endl << "New array (after removing "<< val << "): " << endl;
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Size of new array is " << newSize << endl;
    return 0;
}