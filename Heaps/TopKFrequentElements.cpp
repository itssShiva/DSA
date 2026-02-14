#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        priority_queue<pair<int,int>, 
                       vector<pair<int,int>>, 
                       greater<pair<int,int>>> pq;
        
        vector<int> ans;

        // count frequency
        for (auto it : nums) 
            mpp[it]++;

        // maintain min heap of size k
        for (auto it : mpp) {
            pq.push({it.second, it.first});
            if (pq.size() > k) 
                pq.pop();
        }

        // extract result
        while (!pq.empty()) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1,1,1,2,2,3};
    int k = 2;

    vector<int> result = obj.topKFrequent(nums, k);

    cout << "Top " << k << " frequent elements: ";
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
