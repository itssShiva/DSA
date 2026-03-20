#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        priority_queue<pair<int,int>> pq;
        vector<int> ans;

        for(int i = 0; i < n; i++){
            int diff = abs(x - arr[i]);
            if(pq.size() < k) pq.push({diff, arr[i]});
            else if(pq.top().first > diff){
                pq.pop();
                pq.push({diff, arr[i]});
            }
        }

        while(!pq.empty()){
            int el = pq.top().second;
            ans.push_back(el);
            pq.pop();
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 4;
    int x = 3;

    vector<int> result = obj.findClosestElements(arr, k, x);

    cout << "Closest elements: ";
    for(int val : result){
        cout << val << " ";
    }

    return 0;
}