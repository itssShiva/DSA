#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long solve(vector<int>& bt) {
        int n = bt.size();
        sort(bt.begin(), bt.end());
        
        long long waiting = 0;
        long long t = 0;
        
        for(int i = 0; i < n; i++){
            waiting += t;
            t += bt[i];
        }
        
        waiting = waiting / n;  // average waiting time
        return waiting;
    }
};

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    vector<int> bt(n);
    cout << "Enter burst times:\n";
    for(int i = 0; i < n; i++){
        cin >> bt[i];
    }

    Solution obj;
    long long result = obj.solve(bt);

    cout << "Average waiting time: " << result << endl;

    return 0;
}