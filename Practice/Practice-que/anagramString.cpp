#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {	
public:
    bool anagramStrings(string& s, string t) {
        unordered_map<char,int> mpp;
        for (auto ch : s) {
            mpp[ch]++;
        }
        for (auto sh : t) {
            mpp[sh]++;
        }
        for (auto it : mpp) {
            if ((it.second) % 2 != 0) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution obj;
    string s1 = "listen";
    string s2 = "silent";

    if (obj.anagramStrings(s1, s2)) {
        cout << s1 << " and " << s2 << " are anagrams!" << endl;
    } else {
        cout << s1 << " and " << s2 << " are NOT anagrams!" << endl;
    }

    return 0;
}
