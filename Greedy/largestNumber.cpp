#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> arr;

        for (auto it : nums) {
            arr.push_back(to_string(it));
        }

        auto cmp = [&](string &a, string &b) {
            return a + b > b + a;
        };

        sort(arr.begin(), arr.end(), cmp);

        if (arr[0] == "0") return "0";

        string result = "";
        for (auto it : arr) {
            result += it;
        }

        return result;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {3, 30, 34, 5, 9};

    string ans = obj.largestNumber(nums);

    cout << "Largest Number: " << ans << endl;

    return 0;
}