// display maximum number of each window of k

#include <iostream>
#include <deque>
using namespace std;

void printMax(int arr[], int size, int k) {
    deque<int> dq;

    // for first window
    for (int i = 0; i < k; i++) {
        while (dq.size() > 0 && arr[dq.back()] <= arr[i]) {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    
    // for remaining windows
    
    for (int i = k; i < size; i++) {
        cout << arr[dq.front()] << " ";

        // remove elements that are out of this window
        while (dq.size() > 0 && dq.front() <= i - k) {
            dq.pop_front();
        }

        // remove elements smaller than current element
        while (dq.size() > 0 && arr[dq.back()] <= arr[i]) {
            dq.pop_back();
        }
        dq.push_back(i);
    }

    cout << arr[dq.front()] << endl;
}

int main() {
    int size = 8;
    int k = 3;
    int arr[8] = {1, 3, -1, 9, 5, 3, 6, 7};

    printMax(arr, size, k);
    return 0;
}