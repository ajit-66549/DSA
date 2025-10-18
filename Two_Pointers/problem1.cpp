// find target from sum of three numbers from array 
// two pointer technique

#include <iostream>
using namespace std;

// Time Complexity: O(N^3). something is mistake
void findSum(int *nums, int SIZE, int target)
{
    int sums;
    for (int k = 0; k < SIZE - 2; k++)
    {
        for (int i = 1; i < SIZE - 1; i++)
        {
            for (int j = i + 1; j < SIZE; j++)
            {
                sums = nums[k] + nums[i] + nums[j];
                if (sums == target)
                {
                    cout << "True" << endl;
                    return;
                }
            }
        }
    }
    cout << "False" << endl;
    return;
}

// sorting array 
void sortArray(int nums[], int SIZE) {
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++){
            if (nums[j] > nums[j+1]) {
                swap(nums[j], nums[j+1]);
            }
        }
    }
}

// Time complexity: O(N^2)
void findTheSum(int nums[], int SIZE, int target) {
    for (int i = 0; i < SIZE - 2; i++) {
        int left = i + 1;
        int right = SIZE - 1;
        while ( left < right) {
            int sum = nums[left] + nums[right];
            if (sum == target - nums[i]) {
                cout << "Found" << endl;
                return;
            }
            if (sum > target - nums[i]) {
                right--;
            }
            else {
                left++;
            }
        }
    }
    cout << "Not found " << endl;
}

int main()
{
    int SIZE = 6;
    int nums[6] = {12, 3, 7, 1, 6, 9};
    int target = 8;

    cout << "Original Array: " << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << nums[i]  << " ";
    }
    cout << endl;

    findSum(nums, SIZE, target);

    sortArray(nums, SIZE);

    cout << endl << "Array after sorting: " << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << nums[i]  << " ";
    }
    cout << endl;

    findTheSum(nums, SIZE, target);
    return 0;
}
