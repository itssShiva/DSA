#include <bits/stdc++.h>
using namespace std;

int getLengthofLongestSubstring(string s, int k) {
    int n = s.size();
    int l = 0, r = 0;
    int maxLen = 0;
    map<int,int> mpp;

    while(r < n){
        mpp[s[r]]++;
        if(mpp.size() > k){
            mpp.clear();
            l = r;
        }
        if(mpp.empty()) mpp[s[r]]++;
        int len = r - l + 1;
        maxLen = max(len, maxLen);
        r++;
    }
    return maxLen;
}

int main() {
    string s;
    int k;
    cin >> s >> k;
    cout << getLengthofLongestSubstring(s, k);
    return 0;
}
