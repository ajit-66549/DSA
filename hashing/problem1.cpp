// subarray sum equals k, returns the number of subarrays whose sum equals k

#include <iostream>
#include <unordered_map>
using namespace std;

/*
// brute force method O(n^2)
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
*/

// optimised method 
int findSum(int nums[], int size, int target) {
    vector<int> prefixSum(size);
    prefixSum[0] = nums[0];
    int count = 0;
    unordered_map<int, int> sumMap;

    // a prefixSum array
    for (int i = 1; i < size; i++) {
        prefixSum[i] = prefixSum[i-1] + nums[i];
    }

    for (int j = 0; j < size; j++) {
        if (prefixSum[j] == target) {
            count++;
        }

        int val = prefixSum[j] - target;
        if (sumMap.find(val) != sumMap.end()) {
            count = count + sumMap[val];
        }

        if (sumMap.find(prefixSum[j]) == sumMap.end()) {
            sumMap[prefixSum[j]] = 0;
        }
        sumMap[prefixSum[j]]++;
    }
    return count;
    

}

int main() {
    int size = 7;
    int arr[7] = {9, 4, 0, 20, 3, 10, 5};
    int target = 33;

    int count = findSum(arr, size, target);
    cout << "The number of subarray is " << count << endl;
    return 0;
}