#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        for (int i = num.size() - 1; i >= 0; i--) {
            if ((num[i] - '0') % 2 != 0) {
                return num.substr(0, i + 1);
            }
        }
        return "";
    }
};

int main() {
    Solution sol;
    
    string num;
    cout << "Enter a number string: ";
    cin >> num;

    string result = sol.largestOddNumber(num);
    cout << "Largest odd number from left prefix: " << result << endl;

    return 0;
}
