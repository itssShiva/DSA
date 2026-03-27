#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<bool> seen(26, false);
        vector<int> lastIndex(26, 0);
        stack<int> st;

        int n = s.size();

        for (int i = 0; i < n; i++) {
            lastIndex[s[i] - 'a'] = i;
        }

        for (int i = 0; i < n; i++) {
            int curr = s[i] - 'a';

            if (seen[curr]) continue;

            while (!st.empty() && st.top() > s[i] &&
                   lastIndex[st.top() - 'a'] > i) {
                seen[st.top() - 'a'] = false;
                st.pop();
            }

            st.push(s[i]);
            seen[curr] = true;
        }

        string result = "";
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }

        reverse(result.begin(), result.end());
        return result;
    }
};

int main() {
    Solution obj;

    string s;
    cin >> s;

    string ans = obj.removeDuplicateLetters(s);
    cout << ans << endl;

    return 0;
}