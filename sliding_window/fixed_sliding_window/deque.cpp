// Understanding deque
// Deque is a sequence container from Standard Template Library that allows insertion and deletion from the front and back efficiently in constant time
// It combines features of stack and queue

#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> nums = {1, 2, 3, 4, 5};
    nums.pop_back();
    nums.push_front(0);
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}