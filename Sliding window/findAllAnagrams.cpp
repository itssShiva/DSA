#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int> mpp_curr;
        unordered_map<char,int> mpp_p;
        
        for(auto ch : p){
            mpp_p[ch]++;
        }

        int l = 0, r = 0, n = s.size();
        vector<int> temp;

        while(r < n){
            mpp_curr[s[r]]++;

            if(r - l + 1 == p.size()){
                if(mpp_curr == mpp_p){
                    temp.push_back(l);
                }

                mpp_curr[s[l]]--;
                if(mpp_curr[s[l]] == 0) 
                    mpp_curr.erase(s[l]);

                l++;
            }
            r++;
        }
        return temp;
    }
};

int main() {
    Solution obj;

    string s = "cbaebabacd";
    string p = "abc";

    vector<int> result = obj.findAnagrams(s, p);

    cout << "Starting indices of anagrams: ";
    for(int idx : result) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}