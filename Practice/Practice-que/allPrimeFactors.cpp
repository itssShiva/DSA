#include<iostream>
#include<vector>
using namespace std;

vector<int> getPrimeFactors(int n){
    vector<int>ans;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            bool isPrime=true;
            for(int j=2;j<i;j++){
                if(i%j==0){
                    isPrime=false;
                    break;
                }
            }
                if(isPrime){
                    ans.push_back(i);
                }
        
            }

        }
        return ans;
    }





    int main() {
    int n = 60;
    vector<int> ans = getPrimeFactors(n);
    cout << "Prime Factors for " << n << ": ";
    for(auto factor: ans){
        cout << factor << " ";
    }
    cout << endl;

}