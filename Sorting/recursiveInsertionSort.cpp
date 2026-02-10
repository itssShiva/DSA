#include<iostream>
using namespace std;

void insertionSort(int arr[],int n,int i){
    if(i==n) return;
    int j=i;
    while(j>0&&arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
    }
    insertionSort(arr,n,i+1);
}

int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionSort(arr,n,0);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}