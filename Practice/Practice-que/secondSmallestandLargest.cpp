#include<iostream>
#include<vector>
#include<algorithm>
#include <climits>
using namespace std;

int smallestElement(int arr[],int n){
    int min_ele=INT_MAX;
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


int secondSmallest(int arr[],int n){
    int first=smallestElement(arr,n);
    int second=INT_MAX;
    for(int i=1;i<n;i++){
        if(arr[i]>first&&arr[i]<second){
            second=arr[i];
        }
    }
    return second;
}


int greatestElement(int arr[],int n){
    int max_element=INT_MIN;
    for(int i=1;i<n;i++){
            if(arr[i]>arr[i-1]){
                    max_element=max(max_element,arr[i]);
            }
            else{
                max_element=max(max_element,arr[i-1]);
            }
    }
    return max_element;
}
int secondLargest(int arr[],int n){
         int first=greatestElement(arr,n);
         int second=INT_MIN;
         for(int i=1;i<n;i++){
            if(arr[i]<first&&arr[i]>second){
                second=arr[i];
            }
         }
         return second;
}

int main() {
    int arr[]={1,2,4,7,7,5,9};  
   int n = sizeof(arr) / sizeof(arr[0]);  // total bytes / element bytes
        int sS=secondSmallest(arr,n);
        int sL=secondLargest(arr,n);
    cout<<"Second smallest is "<<sS<<endl;
    cout<<"Second largest is "<<sL<<endl;
    return 0;
}