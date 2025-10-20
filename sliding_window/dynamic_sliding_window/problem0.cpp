// longest substring without repeating characters

#include <iostream>
#include <unordered_set>
using namespace std;

// use two variables: left and right
// right to move forward in the string (end of the substring)
// left to move when duplicate found till the duplicate found (start of the substring)
// unordered set to store the unique characters
// maxLength to store the size of longest substring
// if the character in right index is found in unordered set, move forward left index to remove the duplicate character
// assign the maxLength


int main() {
    string s = "abcabcdefd";
    unordered_set<char> char_set;
    int left = 0;
    int maxLength = 0;

    for (int right = 0; right < s.size(); right++) {
        while (char_set.count(s[right])) {
            char_set.erase(s[left]);
            left++;
        }
        char_set.insert(s[right]);
        if (char_set.size() > maxLength){
            maxLength = char_set.size();
        }
    }
    cout << maxLength << endl;
    return 0;
}