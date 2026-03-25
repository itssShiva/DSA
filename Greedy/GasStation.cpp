#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int curr = 0;
        int start = 0;
        int total = 0;

        for(int i = 0; i < n; i++){
            int diff = gas[i] - cost[i];
            curr += diff;
            total += diff;

            if(curr < 0){
                start = i + 1;
                curr = 0;
            }
        }
        return (total >= 0) ? start : -1;
    }
};

int main() {
    int n;
    cout << "Enter number of stations: ";
    cin >> n;

    vector<int> gas(n), cost(n);

    cout << "Enter gas values:\n";
    for(int i = 0; i < n; i++){
        cin >> gas[i];
    }

    cout << "Enter cost values:\n";
    for(int i = 0; i < n; i++){
        cin >> cost[i];
    }

    Solution obj;
    int result = obj.canCompleteCircuit(gas, cost);

    if(result == -1)
        cout << "No possible starting point\n";
    else
        cout << "Start at index: " << result << endl;

    return 0;
}