#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool checkBalanced(vector<int>& freq){
        int common = 0;
        for(auto it : freq){
            if(it == 0) continue;
            if(common == 0){
                common = it;
            }
            else if(common != it) return false;
        }
        return true;
    }

    int longestBalanced(string s) {
        int n = s.size();
        int maxi = 0;
        for(int i = 0; i < n; i++){
            vector<int> freq(26,0);
            for(int j = i; j < n; j++){
                freq[s[j]-'a']++;

                if(j - i + 1 > maxi && checkBalanced(freq)){
                    maxi = max(maxi, j - i + 1);
                }
            }
        }
        return maxi;
    }
};

int main() {
    Solution obj;
    string s;
    cin >> s;

    cout << obj.longestBalanced(s);

    return 0;
}
