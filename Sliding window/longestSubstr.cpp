//Longest substring without repeation character 
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int maxLen=0;
        vector<int> hash(256,-1);
        int l=0;
        for(int i=0;i<n;i++){
            if(hash[s[i]]>=l){
                l=hash[s[i]]+1;
            }
            hash[s[i]]=i;
            int len=i-l+1;
            maxLen=max(maxLen,len);
        }
        return maxLen;
    }
};

int main() {
    string s;
    cin >> s;
    Solution obj;
    cout << obj.lengthOfLongestSubstring(s);
    return 0;
}
