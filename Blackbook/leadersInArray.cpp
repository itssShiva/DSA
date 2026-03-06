#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        ans.push_back(arr[n-1]);
        for(int i = n-2; i >= 0; i--){
            if(ans.size() > 0){
                int x = ans.back();
                if(arr[i] >= x) ans.push_back(arr[i]);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    // Example input
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    
    Solution sol;
    vector<int> result = sol.leaders(arr);
    
    cout << "Leaders: ";
    for(int x : result) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}