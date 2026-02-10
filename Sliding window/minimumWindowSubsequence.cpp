#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string minWindow(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        int l = 0, k = 0, r = 0, minLen = INT_MAX, start = -1;

        while (r < n) {
            if (s1[r] == s2[k]) k++;

            if (k == m) {
                k = m - 1;
                l = r;
                int end = r;

                while (l >= 0) {
                    if (s1[l] == s2[k]) k--;
                    if (k < 0) break;
                    l--;
                }

                if (end - l + 1 < minLen) {
                    minLen = end - l + 1;
                    start = l;
                }

                k = 0;
                r = l;
            }
            r++;
        }

        return start == -1 ? "" : s1.substr(start, minLen);
    }
};

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    Solution obj;
    cout << obj.minWindow(s1, s2);
    return 0;
}
