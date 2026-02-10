#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int sum = 0, maxSum = 0;

        for(int i = 0; i < k; i++){
            sum += cardPoints[i];
        }

        int l = k - 1;
        int r = n - 1;
        maxSum = sum;

        for(int i = 0; i < k; i++){
            sum -= cardPoints[l];
            sum += cardPoints[r];
            maxSum = max(sum, maxSum);
            l--;
            r--;
        }

        return maxSum;
    }
};

int main() {
    vector<int> cardPoints = {1,2,3,4,5,6,1};
    int k = 3;

    Solution s;
    cout << s.maxScore(cardPoints, k);
    return 0;
}
