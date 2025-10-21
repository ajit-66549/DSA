// maximum average of subarray

#include <iostream>
using namespace std;

float findMaxAvg(int nums[], int size, int k) {
    int sum = 0;
    float maxSum = 0.00;
    for (int i = 0; i < k; i++) {
        sum = sum + nums[i];
    }
    maxSum = sum;

    for (int i = k; i < size; i++) {
        sum = sum + nums[i] - nums[i-k];
        if (sum > maxSum) {
            maxSum = sum;
        }
    }
return maxSum/4;
}

int main() {
    int size = 6;
    int k = 4;
    int nums[6] = {1, 15, -5, -6, 10, 50};

    // output is (15-5-6+50)/4 = 13.5
    float avg = findMaxAvg(nums, size, k);

    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "Maximum average sum of the array is " << avg << endl;
    return 0;
}