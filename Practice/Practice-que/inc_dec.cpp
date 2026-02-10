#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={4 ,2 ,8 ,6 ,15 ,5, 9 ,20};
    int n=sizeof(arr)/sizeof(arr[0]);
   for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }
        }
   }
   int start=n/2;
   int end=n-1;
   while(start<end){
    swap(arr[start],arr[end]);
    start++;
    end--;
   }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}