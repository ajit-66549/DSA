// two sum problem using hash map

#include <iostream>
#include <unordered_map>
using namespace std;

void twoSum(int nums[], int size, int target) {
    unordered_map<int, int> num_map; // value -> index

    for (int i = 0; i < size; ++i) {
        int complement = target - nums[i];

        // if found, return
        if (num_map.find(complement) != num_map.end()) {
            cout << "{" << num_map[complement] << ", " << i << "}" << endl;
            return;
        }
        // if not found, add to the map
        num_map[nums[i]] = i;
    }

}

int main() {
    int size = 5;
    int nums[5] = {2, 7, 11, 15};
    int target = 13;

    twoSum(nums, size, target);
    return 0;
}