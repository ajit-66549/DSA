#include <iostream>
using namespace std;

void selectionSort(int arr[], int size) {
    // outer loop till second last element
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;  // assign minimum index as current i
        // innr loop till last element
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {   // compare value at minimum index with other element in the array
                minIndex = j;    // change the minimum index
            }
        }
        swap(arr[minIndex], arr[i]);   // swap the minimun value with the value at i position (placing the smallest value in the first part of the array)
    }
}

// print array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr)/sizeof(arr[0]);  // total bytes / byte of first element

    cout << "Original Array:" << endl;
    printArray(arr, size);

    selectionSort(arr, size);
    cout << endl;
    
    cout << "Sorted Array:" << endl;
    printArray(arr, size);
    return 0;
}