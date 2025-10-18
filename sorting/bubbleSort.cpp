#include <iostream>
using namespace std;

void sortArray(int nums[], int SIZE) {
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++){
            if (nums[j] > nums[j+1]) {
                swap(nums[j], nums[j+1]);
            }
        }
    }
}

int main() {
    int SIZE = 6;
    int nums[6] = {12, 3, 7, 1, 6, 9};

    cout << "Original Array: " << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << nums[i]  << " ";
    }
    cout << endl;

    sortArray(nums, SIZE);

    cout << "Array after sorting: " << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << nums[i]  << " ";
    }
    cout << endl;
    
    return 0;
}