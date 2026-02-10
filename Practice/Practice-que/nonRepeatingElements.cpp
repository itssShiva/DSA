#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

void findnonRepeatingElements(vector<int>&arr){
    int n=arr.size();
    map<int,int>mpp;
    int count=0;
    for(auto it:arr){
        mpp[it]++;
    }
    for (auto& it : mpp) {
        if (it.second == 1) {
            cout << it.first << endl;
        }
    }
}


int main() {
    vector<int> arr = {1,1,2,3,4,4,5,2};
    findnonRepeatingElements(arr);
    return 0;
}