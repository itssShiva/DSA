#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n = s.size();
        int l = 0, r = 0;
        unordered_map<string, int> mpp;
        vector<string> temp;
        string res = "";
        
        while (r < n) {
            res += s[r];
            if (r - l + 1 == 10) {
                mpp[res] += 1;
                res.erase(0, 1);
                l = l + 1;
            }
            r++;
        }
        
        for (auto it : mpp) {
            if (it.second > 1) {
                temp.push_back(it.first);
            }
        }
        return temp;
    }
};

int main() {
    Solution sol;
    string s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT";
    
    vector<string> repeated = sol.findRepeatedDnaSequences(s);
    
    for (const string &seq : repeated) {
        cout << seq << endl;
    }
    
    return 0;
}