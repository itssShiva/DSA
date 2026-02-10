#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> v;
        for(int i=1; i<=n; i++){
            if(n % i == 0){
                v.push_back(i);
            }
        }
        return v;
    }
};

int main() {
    Solution s;
    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<int> result = s.divisors(n);

    cout << "Divisors of " << n << " are: ";
    for(int d : result){
        cout << d << " ";
    }
    cout << endl;

    return 0;
}
