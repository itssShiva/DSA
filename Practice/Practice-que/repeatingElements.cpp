#include<iostream>
using namespace std;

void findRepeatingElements(int *arr,int n){
    int cnt=0;
    int dup[n];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                dup[cnt++]=arr[i];
            }
        }
    }
    for(int i=0;i<cnt;i++){
        if(dup[i]!=dup[i+1]){
            cout<<dup[i]<<endl;
        }
    }
}
int main() {
		int arr[] = {1,1,2,3,4,4,5,2,5};
		findRepeatingElements(arr,9);
	}