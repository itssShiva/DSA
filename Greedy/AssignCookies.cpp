#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i = 0, j = 0, cnt = 0;
        int n = g.size();
        int m = s.size();
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        while(i < n && j < m) {
            if(g[i] > s[j]) j++;
            else {
                cnt++;
                i++;
                j++;
            }
        }
        return cnt;
    }
};

int main() {
    Solution sol;
    vector<int> g = {1, 2, 3};  // children's greed factors
    vector<int> s = {1, 1};     // cookie sizes
    
    int result = sol.findContentChildren(g, s);
    cout << "Maximum content children: " << result << endl;  // Output: 1
    
    return 0;
}