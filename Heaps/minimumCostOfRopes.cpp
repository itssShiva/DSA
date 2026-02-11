#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minCost(vector<int>& arr) {
        int n = arr.size();
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i = 0; i < n; i++) 
            pq.push(arr[i]);
        
        int ans = 0;
        while(pq.size() > 1){
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            int sum = a + b;
            ans += sum;
            pq.push(sum);
        }
        return ans;
    }
};

int main() {
    Solution obj;
    vector<int> arr = {4, 3, 2, 6};
    cout << obj.minCost(arr);
    return 0;
}
