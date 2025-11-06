#include <iostream>
using namespace std;

int partition(int arr[], int start, int end) {
    int index = start - 1;      // Index to allocate elements
    int pivot = arr[end];       // Taking last element as a pivot

    // Taking all other smaller elements than pivot infront of pivot
    for (int i = start; i < end; i++) {
        if (arr[i] < pivot) {
            index++;
            swap(arr[index], arr[i]);
        }
    }

    // Fixing pivot location
    index++;
    swap(arr[index], arr[end]);
    
    return index;   // Returning index of pivot element
}

void QuickSort(int arr[], int start, int end) {
    if (start < end) {
        int pvtIndex = partition(arr, start, end);

        // Left part
        QuickSort(arr, start, pvtIndex - 1);

        // Right part
        QuickSort(arr, pvtIndex + 1, end);
    }
}

int main() {
    int arr[] = {12, 31, 35, 8, 32, 17};
    int size = sizeof(arr) / sizeof(arr[0]);     // total bytes (4*6) / size of one element (4)

    // Printing original array
    cout << "Original Array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    QuickSort(arr, 0, size - 1);

    // Printing Sorted Array
    cout << endl << "Sorted Array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}