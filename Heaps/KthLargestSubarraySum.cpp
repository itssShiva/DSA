#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kthLargest(vector<int> &arr, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        int n = arr.size();
        for(int i = 0; i < n; i++){
            int sum = 0;
            for(int j = i; j < n; j++){
                sum += arr[j];
                pq.push(sum);
                if(pq.size() > k)
                    pq.pop();
            }
        }
        return pq.top();
    }
};

int main() {
    Solution obj;
    vector<int> arr = {1, 2, 3};
    int k = 2;
    cout << obj.kthLargest(arr, k);
    return 0;
}
