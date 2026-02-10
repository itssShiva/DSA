#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char map_s[128] = {0};
        char map_t[128] = {0};
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (map_s[s[i]] != map_t[t[i]]) return false;
            map_s[s[i]] = i + 1;
            map_t[t[i]] = i + 1;
        }
        return true;
    }
};

int main() {
    Solution solution;
    
    string s1 = "egg";
    string t1 = "add";
    
    string s2 = "foo";
    string t2 = "bar";

    string s3 = "paper";
    string t3 = "title";

    cout << boolalpha;  // print "true"/"false" instead of "1"/"0"
    cout << "Is \"" << s1 << "\" isomorphic to \"" << t1 << "\"? " << solution.isIsomorphic(s1, t1) << endl;
    cout << "Is \"" << s2 << "\" isomorphic to \"" << t2 << "\"? " << solution.isIsomorphic(s2, t2) << endl;
    cout << "Is \"" << s3 << "\" isomorphic to \"" << t3 << "\"? " << solution.isIsomorphic(s3, t3) << endl;

    return 0;
}
