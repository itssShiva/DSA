#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using  namespace std;

void Sortele(int *arr,int n){
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    vector<pair<int,int>>v(mpp.begin(),mpp.end());
   sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second;
    });
    int idx = 0;
    for (auto& p : v) {
        for (int i = 0; i < p.second; i++) {
            arr[idx++] = p.first;
        }
    }
}

int main()
{
  int n = 8;
  int arr[] = {1, 2, 3, 2, 4, 3, 1, 2};
  Sortele(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}