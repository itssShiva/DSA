#include<iostream>
#include<vector>
#include<algorithm>
#include <climits>
using namespace std;

// FIRST METHOD
// int smallestElement(vector<int>&arr){
//     auto minelement=min_element(arr.begin(),arr.end());
//     return (*minelement);
// }


//SECOND METHOD 
int smallestElement(vector<int>&arr){
    int min_ele=INT_MAX;
    int n=arr.size();
    for(int i=1;i<n;i++){
            if(arr[i]>arr[i-1]){
                min_ele=min(min_ele,arr[i-1]);
            }
            else{
               min_ele= min(min_ele,arr[i]);
            }
    }
    return min_ele;
}

int main() {
    vector<int> arr1 = {2,5,1,3,0};
    vector<int> arr2 = {8,10,5,7,9};
   
    cout<<"The smallest element in the array is: "<<smallestElement(arr1)<<endl;
    cout<<"The smallest element in the array is: "<<smallestElement(arr2);
   
    return 0;
}