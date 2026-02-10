#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> arr;
        for (auto el : s) {
            arr[el]++; // count frequency
        }

        vector<char> chars;
        for (auto ls : arr) {
            chars.push_back(ls.first); // store unique characters
        }

        // custom sorting
        sort(chars.begin(), chars.end(), [&](char a, char b) {
            if (arr[a] == arr[b]) {
                return a < b;   // alphabetic order if same frequency
            }
            return arr[a] > arr[b]; // higher frequency first
        });

        string result = "";
        for (char c : chars) {
            result.append(arr[c], c); // repeat char arr[c] times
        }

        return result;
    }
};

int main() {
    Solution sol;
    string s;

    cout << "Enter a string: ";
    cin >> s;

    string sorted = sol.frequencySort(s);
    cout << "Output: " << sorted << endl;

    return 0;
}
