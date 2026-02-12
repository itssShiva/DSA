#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> mpp(26,0);
        priority_queue<int> pq;
        int time = 0;

        for(char it:tasks){
            mpp[it-'A']++;
        }

        for(int i=0;i<26;i++){
            if(mpp[i]>0){
                pq.push(mpp[i]);
            } 
        }

        while(!pq.empty()){
            vector<int> temp;
            for(int i=1;i<=n+1;i++){
                if(!pq.empty()){
                    int freq=pq.top();
                    pq.pop();
                    freq--;
                    temp.push_back(freq);
                }
            }

            for(int &f:temp){
                if(f>0){
                    pq.push(f);
                }
            }

            if(pq.empty()){
                time+=temp.size();
            }
            else{
                time+=n+1;
            }
        }
        return time;
    }
};

int main() {
    Solution obj;
    vector<char> tasks = {'A','A','A','B','B','B'};
    int n = 2;

    int ans = obj.leastInterval(tasks, n);
    cout << ans;

    return 0;
}
