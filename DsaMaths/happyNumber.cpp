#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;

        while (n != 1 && seen.find(n) == seen.end()) {
            seen.insert(n);

            int number = 0;
            while (n > 0) {
                int digit = n % 10;
                number += digit * digit;
                n /= 10;
            }

            n = number;
        }

        return n == 1;
    }
};

int main() {
    Solution obj;

    int n = 19;
    cout << (obj.isHappy(n) ? "Happy Number" : "Not Happy") << endl;

    return 0;
}