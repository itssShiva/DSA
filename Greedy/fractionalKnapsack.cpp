#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    struct Item {
        int value, weight;
        double ratio;
    };
    
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        int n = val.size();
        vector<Item> items(n);
        for(int i = 0; i < n; i++) {
            items[i].value = val[i];
            items[i].weight = wt[i];
            items[i].ratio = (double)val[i] / wt[i];
        }
        
        auto cmp = [](const Item &a, const Item &b) {
            return a.ratio > b.ratio;
        };
        
        sort(items.begin(), items.end(), cmp);
        
        double totalValue = 0.0;
        for(int i = 0; i < n && capacity > 0; i++) {
            if(items[i].weight <= capacity) {
                totalValue += items[i].value;
                capacity -= items[i].weight;
            } else {
                totalValue += items[i].ratio * capacity;
                capacity = 0;
            }
        }
        
        return round(totalValue * 1e6) / 1e6;
    }
};

int main() {
    Solution sol;
    vector<int> val = {60, 100, 120};
    vector<int> wt = {10, 20, 30};
    int capacity = 50;

    double maxValue = sol.fractionalKnapsack(val, wt, capacity);
    cout << fixed << setprecision(6) << maxValue << endl; // Output: 240.000000

    return 0;
}