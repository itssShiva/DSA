#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubstring(string s, int k) {
       if(s.size() == 0 || k > s.size()) return 0;
       if(k <= 1) return s.size();
       
       unordered_map<char,int> freq;
       for(char c : s){
           freq[c]++;
       } 
       
       for(int i = 0; i < s.size(); i++){
           if(freq[s[i]] < k){
               int left = longestSubstring(s.substr(0, i), k);
               int right = longestSubstring(s.substr(i + 1, s.size() - i - 1), k);
               return max(left, right);
           }
       }
       
       return s.size();
    }
};

int main() {
    Solution sol;
    string s = "aaabb";
    int k = 3;

    int result = sol.longestSubstring(s, k);
    cout << "Longest substring length: " << result << endl;

    return 0;
}