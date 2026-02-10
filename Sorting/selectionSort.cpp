#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
        for(int i=0;i<=n-2;i++){
                int minimum=i;
                for(int j=i;j<=n-1;j++){
                    if(arr[j]<arr[minimum]){
                       minimum=j;
                    }

                } 
                
                // int temp=arr[minimum];
                //     arr[minimum]=arr[i];
                //     arr[i]=temp;
                swap(arr[minimum],arr[i]);
        }

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
    selectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}