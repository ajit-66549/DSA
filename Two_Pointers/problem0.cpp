// find target from sum of two numbers from array
// two pointer technique

#include <iostream>
using namespace std;

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

bool findtarget(int* nums, int size, int target) {
    int left = 0;
    int right = size - 1;
    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target) {
            return true;
        }
        if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }
    return false;
}

int main() {
    int size = 5;
    int arr[5] = {9, 4, 2, 7, 12};

    // sort the array
    sortArray(arr, size);

    // display sorted array data
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int target = 1;

    cout << (findtarget(arr, size, target) ? "Found" : "Not found") << endl;
    return 0;
}