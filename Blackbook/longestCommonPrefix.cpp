#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        int n = strs.size();
        string res;
        bool isFound = true;

        for(int i = 0; i < strs[0].size(); i++){
            char ch = strs[0][i];
            for(int j = 1; j < strs.size(); j++){
                if(i >= strs[j].size() || strs[j][i] != ch){
                    isFound = false;
                    break;
                }
            }
            if(isFound == true) res += ch;
            else break;
        }
        return res;
    }
};

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> strs(n);
    cout << "Enter the strings:\n";
    for(int i = 0; i < n; i++){
        cin >> strs[i];
    }

    Solution obj;
    string result = obj.longestCommonPrefix(strs);

    cout << "Longest Common Prefix: " << result << endl;

    return 0;
}