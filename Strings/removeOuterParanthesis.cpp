#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int open = 0;
        for (auto ch : s) {
            if (ch == '(') {
                if (open > 0) {
                    result += ch;
                }
                open++;
            } else {
                open--;
                if (open > 0) {
                    result += ch;
                }
            }
        }
        return result;
    }
};

int main() {
    string input;
    cout << "Enter a valid parentheses string: ";
    cin >> input;

    Solution sol;
    string output = sol.removeOuterParentheses(input);

    cout << "Output after removing outermost parentheses: " << output << endl;

    return 0;
}
