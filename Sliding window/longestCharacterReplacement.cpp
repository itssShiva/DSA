#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        vector<int> hash(26, 0);
        int maxf = 0;
        int l = 0, maxLen = 0;

        for(int r = 0; r < n; r++){
            hash[s[r] - 'A']++;
            maxf = max(maxf, hash[s[r] - 'A']);

            while(((r - l + 1) - maxf) > k){
                hash[s[l] - 'A']--;
                maxf = 0;
                for(int i = 0; i < 26; i++) maxf = max(maxf, hash[i]);
                l++;
            }

            maxLen = max(maxLen, r - l + 1);
        }
        return maxLen;
    }
};

int main() {
    string s;
    int k;
    cin >> s >> k;

    Solution sol;
    cout << sol.characterReplacement(s, k);
    return 0;
}
