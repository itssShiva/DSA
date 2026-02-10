#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    unordered_map<int,int>mpp;
    int arr[n];
    cout<<"Enter all array elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }

    cout<<"Ente the number of elements whose frequency you want to check : "<<endl;
    int q;
    cin>>q;
    while(q--){
         cout<<"Ente the number  whose frequency you want to check :"<<endl;
        int number;
        cin>>number;
        cout<<"Number of frequency of Element you given :"<<endl;
        cout<<mpp[number];
    }

}