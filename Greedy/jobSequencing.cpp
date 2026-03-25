#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        vector<pair<int,int>> jobs;
        for(int i = 0; i < profit.size(); i++){
            jobs.push_back({profit[i], deadline[i]});
        }

        int maxDeadline = *max_element(deadline.begin(), deadline.end());
        sort(jobs.begin(), jobs.end(), greater<pair<int,int>>());

        int cnt = 0, totalProfit = 0;
        vector<int> hash(maxDeadline + 1, -1);

        for(int i = 0; i < jobs.size(); i++){
            int k = jobs[i].second;
            for(int j = k; j >= 1; j--){
                if(hash[j] == -1){
                    hash[j] = i;
                    cnt++;
                    totalProfit += jobs[i].first;
                    break;
                }
            }
        }
        return {cnt, totalProfit};
    }
};

int main() {
    int n;
    cout << "Enter number of jobs: ";
    cin >> n;

    vector<int> deadline(n), profit(n);

    cout << "Enter deadlines:\n";
    for(int i = 0; i < n; i++){
        cin >> deadline[i];
    }

    cout << "Enter profits:\n";
    for(int i = 0; i < n; i++){
        cin >> profit[i];
    }

    Solution obj;
    vector<int> result = obj.jobSequencing(deadline, profit);

    cout << "Number of jobs done: " << result[0] << endl;
    cout << "Total profit: " << result[1] << endl;

    return 0;
}