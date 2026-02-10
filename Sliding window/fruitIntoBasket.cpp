#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int l = 0, maxLen = 0;
        unordered_map<int,int> cnt;

        for(int r = 0; r < n; r++){
            cnt[fruits[r]]++;
            while(cnt.size() > 2){
                cnt[fruits[l]]--;
                if(cnt[fruits[l]] == 0) cnt.erase(fruits[l]);
                l++;
            }
            maxLen = max(maxLen, r - l + 1);
        }
        return maxLen;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> fruits(n);
    for(int i = 0; i < n; i++) cin >> fruits[i];

    Solution s;
    cout << s.totalFruit(fruits);
    return 0;
}
