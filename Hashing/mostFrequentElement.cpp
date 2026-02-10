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
     int max_freq=0;
    int most_freq_element;
    cout<<"Enter all array elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }


    for(auto& pair:mpp){
        if(pair.second>max_freq){
                    most_freq_element=pair.first;
                    max_freq=pair.second;
                }
                if(pair.first<most_freq_element&&pair.second==max_freq){
                    most_freq_element=pair.first;
                    max_freq=pair.second;
                }
    }
    cout<<"Maximum element inside array: "<<most_freq_element<<endl;
    cout<<"Frequency of that element : "<<max_freq<<endl;

   
}