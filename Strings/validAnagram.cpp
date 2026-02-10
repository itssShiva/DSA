#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        
        unordered_map<char, int> ms;
        unordered_map<char, int> mt;

        for (auto el : s) {
            ms[el]++;
        }

        for (auto el : t) {
            mt[el]++;
        }

        return ms == mt;
    }
};

int main() {
    Solution solution;

    string s1 = "anagram";
    string t1 = "nagaram";

    string s2 = "rat";
    string t2 = "car";

    cout << boolalpha;  // To print "true" or "false"

    cout << "Is \"" << s1 << "\" an anagram of \"" << t1 << "\"? " 
         << solution.isAnagram(s1, t1) << endl;

    cout << "Is \"" << s2 << "\" an anagram of \"" << t2 << "\"? " 
         << solution.isAnagram(s2, t2) << endl;

    return 0;
}
