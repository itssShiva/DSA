#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKSumPairs(vector<int>& a, vector<int>& b, int k) {
        int n = a.size();
        int m = b.size();
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        priority_queue<pair<int,pair<int,int>>> pq;
        set<pair<int,int>> s;
        vector<int> ans;
        
        pq.push({a[n-1] + b[m-1], {n-1, m-1}});
        s.insert({n-1, m-1});
        
        while(k-- && !pq.empty()){
            auto p = pq.top();
            pq.pop();
            
            int sum = p.first;
            int i = p.second.first;
            int j = p.second.second;
            
            ans.push_back(sum);
            
            if(i-1 >= 0 && s.find({i-1, j}) == s.end()){
                pq.push({a[i-1] + b[j], {i-1, j}});
                s.insert({i-1, j});
            }
            
            if(j-1 >= 0 && s.find({i, j-1}) == s.end()){
                pq.push({a[i] + b[j-1], {i, j-1}});
                s.insert({i, j-1});
            }
        }
        
        return ans;
    }
};

int main() {
    
    vector<int> a = {1, 4, 2, 3};
    vector<int> b = {2, 5, 1, 6};
    int k = 4;
    
    Solution obj;
    vector<int> result = obj.topKSumPairs(a, b, k);
    
    for(int x : result){
        cout << x << " ";
    }
    
    return 0;
}
