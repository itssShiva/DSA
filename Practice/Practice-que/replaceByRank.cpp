#include<iostream>
#include<set>
using namespace std;
int main(){
    int arr[]={15,20,11,96,75,12,35};
    int n=7;
    for(int i=0;i<n;i++){
        set<int>s;
        for(int j=0;j<n;j++){
            if(arr[i]>arr[j]){
                s.insert(arr[j]);
            }
        }
        cout<<s.size()+1<<endl;;
    }

}