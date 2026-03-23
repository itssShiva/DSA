#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0, j = numbers.size() - 1;
        while (i < j) {
            if ((numbers[i] + numbers[j]) == target) return {i + 1, j + 1};
            else if ((numbers[i] + numbers[j]) > target) j--;
            else i++;
        }
        return {};
    }
};

int main() {
    Solution obj;

    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = obj.twoSum(numbers, target);

    if (!result.empty()) {
        cout << "Indices (1-based): " << result[0] << " " << result[1] << endl;
    } else {
        cout << "No solution found" << endl;
    }

    return 0;
}