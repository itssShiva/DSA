// Second highest most occurrin element
#include<iostream>
using namespace std;
int main(){
    int a[]={1,6,9,8,4,66,7,3,6,6,4};
    int maxElement=-1;
    int maxFreq=-1;
    int secondFreq=-1;
    int secondHighest=-1;
     int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        int currentFreq=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                currentFreq++;
            }
            }
           if(currentFreq>maxFreq){
            secondFreq=maxFreq;
            secondHighest=maxElement;

            maxFreq=max(currentFreq,maxFreq);
            maxElement=a[i];
           }
           else if(currentFreq>secondFreq&&a[i]!=maxElement){
            secondFreq=currentFreq;
            secondHighest=a[i];
           }
           
        
    }
    cout << "Number occurring second highest is " << secondHighest;
    
}
