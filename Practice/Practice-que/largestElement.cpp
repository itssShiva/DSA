#include<iostream>
#include<vector>
#include<algorithm>
#include <climits>
using namespace std;

//FIRST METHOD
// int greatestElement(vector<int>&arr){
//     auto it=max_element(arr.begin(),arr.end());
//     return *it;
// }

//SECOND METHOD
int greatestElement(vector<int>&arr){
    int max_element=INT_MIN;
    for(int i=1;i<arr.size();i++){
            if(arr[i]>arr[i-1]){
                    max_element=max(max_element,arr[i]);
            }
            else{
                max_element=max(max_element,arr[i-1]);
            }
    }
    return max_element;
}





int main() {
    vector<int> arr1 = {2,5,1,3,0};
    vector<int> arr2 = {8,10,5,7,95};
   
    cout<<"The greatest element in the array is: "<<greatestElement(arr1)<<endl;
    cout<<"The greatest element in the array is: "<<greatestElement(arr2);
   
    return 0;
}