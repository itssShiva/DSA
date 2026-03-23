#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());

        int n = arr.size();
        int i = 0, j = 0;
        int platform = 0, maxPlatform = 0;

        while (i < n && j < n) {
            if (arr[i] <= dep[j]) {
                platform++;
                i++;
            } else {
                platform--;
                j++;
            }
            maxPlatform = max(maxPlatform, platform);
        }

        return maxPlatform;
    }
};

int main() {
    Solution obj;

    vector<int> arr = {900, 940, 950, 1100, 1500, 1800};
    vector<int> dep = {910, 1200, 1120, 1130, 1900, 2000};

    int result = obj.minPlatform(arr, dep);

    cout << "Minimum Platforms Required: " << result << endl;

    return 0;
}