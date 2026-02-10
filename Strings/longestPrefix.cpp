#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& arr) {
        string ans="";
        for(int i=0; i<arr[0].length(); i++){
            char ch=arr[0][i];
            bool match=true;

            //for comparing ch with rest of the strings
            for(int j=1; j<arr.size(); j++){
                if(arr[j].length() <= i || ch != arr[j][i]){ // Note: arr[j].length() <= i
                    match=false;
                    break;
                }
            }
            if(!match) break;
            ans+=ch;
        }
        return ans;
    }
};

int main() {
    vector<string> arr = {"flower", "flow", "flight"};
    Solution s;
    string res = s.longestCommonPrefix(arr);

    cout << "Longest Common Prefix: " << res << endl;
    return 0;
}
