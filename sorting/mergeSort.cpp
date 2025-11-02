/*
Merge Sort -> Divide and Conquer technique
Divide from middle until get single element in each part
Backtrack and sort each parts
*/
#include <iostream>
using namespace std;

void merge(int arr[], int start, int middle, int end) {
    // size of left subarray
    int nL = middle - start + 1;
    // size of right subarray
    int nR = end - middle;

    int L[nL], R[nR];  // temporary sub arrays

    // Copying elements in each subarray
    for (int i = 0; i < nL; i++)
        L[i] = arr[start + i];
    for (int j = 0; j < nR; j++)
        R[j] = arr[middle + 1 + j];

    int i = 0, j = 0, k = start;

    // Merging subarrays
    while (i < nL && j < nR) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements
    while (i < nL) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < nR) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int start, int end) {
    if (start < end) {
        int middle = start + (end - start) / 2;

        // sort left part
        mergeSort(arr, start, middle);

        // sort right part
        mergeSort(arr, middle + 1, end);

        // merge the sorted halves
        merge(arr, start, middle, end);
    }
}

int main() {
    int arr[6] = {12, 31, 35, 8, 32, 17};
    mergeSort(arr, 0, 5);

    cout << "Sorted array: ";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
