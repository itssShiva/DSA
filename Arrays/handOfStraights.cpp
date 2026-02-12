#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int,int> mpp;
        for(auto it : hand) mpp[it]++;
        if(hand.size() % groupSize != 0) return false;

        for(auto it : mpp){
            if(mpp[it.first] > 0){
                int freq = mpp[it.first];
                for(int i = 0; i < groupSize; i++){
                    if(mpp[it.first + i] < freq) return false;
                    mpp[it.first + i] -= freq;
                }
            }
        }
        return true;
    }
};

int main(){
    Solution obj;
    vector<int> hand = {1,2,3,6,2,3,4,7,8};
    int groupSize = 3;

    bool ans = obj.isNStraightHand(hand, groupSize);

    if(ans) cout << "true";
    else cout << "false";

    return 0;
}
