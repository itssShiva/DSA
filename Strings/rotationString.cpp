#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) return false;
        return (s + s).find(goal) != string::npos;
    }
};

int main() {
    Solution solution;

    string s1 = "abcde";
    string goal1 = "cdeab";

    string s2 = "abcde";
    string goal2 = "abced";

    cout << boolalpha;  // Print true/false instead of 1/0
    cout << "Is \"" << goal1 << "\" a rotation of \"" << s1 << "\"? " << solution.rotateString(s1, goal1) << endl;
    cout << "Is \"" << goal2 << "\" a rotation of \"" << s2 << "\"? " << solution.rotateString(s2, goal2) << endl;

    return 0;
}
