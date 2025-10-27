// subarray sum equals k, returns the number of subarrays whose sum equals k

#include <iostream>
using namespace std;

// brute force method
int findSum(int nums[], int size, int target) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        int sum = 0;
        for (int j = i; j < size; j++) {
            sum = sum + nums[j];
            if (sum == target) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int size = 6;
    int arr[6] = {9, 4, 20, 3, 10, 5};
    int target = 33;

    int count = findSum(arr, size, target);
    cout << "The number of subarray is " << count << endl;
    return 0;
}