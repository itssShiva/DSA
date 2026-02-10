#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        int res = 0, curr = 0;
        for (auto ls : s) {
            if (ls == '(') {
                curr++;
                res = max(res, curr);
            }
            if (ls == ')') {
                curr--;
            }
        }
        return res;
    }
};

int main() {
    Solution sol;
    string s;

    cout << "Enter a string: ";
    cin >> s;

    int depth = sol.maxDepth(s);
    cout << "Maximum Depth of Parentheses: " << depth << endl;

    return 0;
}
