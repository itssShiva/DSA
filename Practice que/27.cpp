// Highest occurring element in array
#include<iostream>
using namespace std;
int main(){
    int a[]={1,6,9,8,4,66,7,3,6};
    int count=0;
    int maxElement=-1;
     int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        int current=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                current++;
            }
           if(current>count){
            count=current;
            maxElement=a[j];
           }
        }
    }
    cout << "Number occurring highest is " << maxElement;
    
}
