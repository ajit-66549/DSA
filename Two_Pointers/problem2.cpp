// remove duplicate numbers from array
// two pointer technique

#include <iostream>
using namespace std;

void removeDuplicate(int arr[], int size) {
    // first item is unique
    int check = 1;
    int newsize = 1;
    for (check = 1; check < size; check++) {
        // not equal to prev meaning its is unique
        if (arr[check] != arr[check-1]) {
            arr[newsize] = arr[check];
            newsize++;
        }
    }

    for (int i = 0; i < newsize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size = 13;
    int arr[13] = {0, 0, 0, 1, 1, 1, 2, 2, 3, 3, 5, 5, 5};
    removeDuplicate(arr, size);
    return 0;
}