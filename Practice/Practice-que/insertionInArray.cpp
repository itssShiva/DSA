#include <bits/stdc++.h>
using namespace std;
void insertatbegin(int* arr,int n,int value)
{
    for(int i=n-1;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=value;
}

void insertatEnd(int *arr,int n,int value){
    
    arr[n]=value;
}

void insertatPos(int *arr,int n,int value,int pos){
    for(int i=n;i>pos+1;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=value;
}
int main()
{
    int n=8;
    int arr[9]={10,9,14,8,20,48,16,9};
    int value=140;
    int pos=3;
    cout<<"Before inserting the value  :"<<endl;
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // insertatbegin(arr,n,value);
    //insertatEnd(arr,n,value);
    insertatPos(arr,n,value,pos);
    cout<<"After inserting the value :"<<endl;
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}