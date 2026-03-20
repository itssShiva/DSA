#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int maxMeetings(vector<int>& start, vector<int>& end) {
        vector<tuple<int,int,int>> meetings;
        int freeTime = -1;
        int cnt = 0;

        for(int i = 0; i < start.size(); i++){
            meetings.push_back({end[i], start[i], i+1});
        }

        sort(meetings.begin(), meetings.end());

        for(auto it : meetings){
            int e = get<0>(it);
            int s = get<1>(it);

            if(freeTime < s){
                cnt++;
                freeTime = e;
            }
        }
        return cnt;
    }
};

int main() {
    int n;
    cin >> n;   // number of meetings

    vector<int> start(n), end(n);

    // input start times
    for(int i = 0; i < n; i++){
        cin >> start[i];
    }

    // input end times
    for(int i = 0; i < n; i++){
        cin >> end[i];
    }

    Solution obj;
    int result = obj.maxMeetings(start, end);

    cout << "Maximum meetings: " << result << endl;

    return 0;
}