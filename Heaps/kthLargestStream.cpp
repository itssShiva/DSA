#include <bits/stdc++.h>
using namespace std;

class KthLargest {

    priority_queue<int, vector<int>, greater<int>> pq;
    int size = 0;

public:
    KthLargest(int k, vector<int>& nums) {
        size = k;
        for (auto it : nums) {
            pq.push(it);
            if (pq.size() > size) pq.pop();
        }
    }
    
    int add(int val) {
        pq.push(val);
        if (pq.size() > size) pq.pop();
        return pq.top();
    }
};

int main() {
    
    int k = 3;
    vector<int> nums = {4, 5, 8, 2};
    
    KthLargest obj(k, nums);
    
    cout << obj.add(3) << endl;
    cout << obj.add(5) << endl;
    cout << obj.add(10) << endl;
    cout << obj.add(9) << endl;
    cout << obj.add(4) << endl;
    
    return 0;
}
